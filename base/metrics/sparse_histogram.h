// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_METRICS_SPARSE_HISTOGRAM_H_
#define BASE_METRICS_SPARSE_HISTOGRAM_H_

#include <map>
#include <string>

#include "base/base_export.h"
#include "base/basictypes.h"
#include "base/compiler_specific.h"
#include "base/memory/scoped_ptr.h"
#include "base/metrics/histogram_base.h"
#include "base/metrics/sample_map.h"
#include "base/synchronization/lock.h"

namespace base {

class HistogramSamples;

class BASE_EXPORT_PRIVATE SparseHistogram : public HistogramBase {
 public:
  // If there's one with same name, return the existing one. If not, create a
  // new one.
  static HistogramBase* FactoryGet(const std::string& name, int32 flags);

  virtual ~SparseHistogram();

  // HistogramBase implementation:
  virtual HistogramType GetHistogramType() const OVERRIDE;
  virtual bool HasConstructionArguments(Sample minimum,
                                        Sample maximum,
                                        size_t bucket_count) const OVERRIDE;
  virtual void Add(Sample value) OVERRIDE;
  virtual void AddSamples(const HistogramSamples& samples) OVERRIDE;
  virtual bool AddSamplesFromPickle(PickleIterator* iter) OVERRIDE;
  virtual scoped_ptr<HistogramSamples> SnapshotSamples() const OVERRIDE;
  virtual void WriteHTMLGraph(std::string* output) const OVERRIDE;
  virtual void WriteAscii(std::string* output) const OVERRIDE;

 protected:
  // HistogramBase implementation:
  virtual bool SerializeInfoImpl(Pickle* pickle) const OVERRIDE;

 private:
  // Clients should always use FactoryGet to create SparseHistogram.
  explicit SparseHistogram(const std::string& name);

  friend BASE_EXPORT_PRIVATE HistogramBase* DeserializeHistogramInfo(
      PickleIterator* iter);
  static HistogramBase* DeserializeInfoImpl(PickleIterator* iter);

  virtual void GetParameters(DictionaryValue* params) const OVERRIDE;
  virtual void GetCountAndBucketData(Count* count,
                                     ListValue* buckets) const OVERRIDE;

  // For constuctor calling.
  friend class SparseHistogramTest;

  // Protects access to |samples_|.
  mutable base::Lock lock_;

  SampleMap samples_;

  DISALLOW_COPY_AND_ASSIGN(SparseHistogram);
};

}  // namespace base

#endif  // BASE_METRICS_SPARSE_HISTOGRAM_H_
