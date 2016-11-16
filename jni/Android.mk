LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm
LOCAL_CPP_EXTENSION := .cc
LOCAL_MODULE := base
LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/../ \
	$(LOCAL_PATH)/../base \
	$(JNI_H_INCLUDE) \
	$(LOCAL_PATH)

LOCAL_SRC_FILES := \
../base/allocator/type_profiler_control.cc \
../base/allocator/type_profiler_tcmalloc.cc \
../base/allocator/type_profiler.cc \
../base/at_exit.cc \
../base/base64.cc \
../base/base_paths.cc \
../base/base_paths_android.cc \
../base/base_paths_posix.cc \
../base/base_switches.cc \
../base/base_time.cc \
../base/bind_helpers.cc \
../base/build_time.cc \
../base/callback_internal.cc \
../base/check_example.cc \
../base/command_line.cc \
../base/cpu.cc \
../base/debug/profiler.cc \
../base/debug/debugger_posix.cc \
../base/debug/stack_trace_android.cc \
../base/debug/trace_event_impl.cc \
../base/debug/debugger.cc \
../base/debug/alias.cc \
../base/debug/crash_logging.cc \
../base/debug/trace_event_android.cc \
../base/debug/stack_trace.cc \
../base/environment.cc \
../base/event_recorder_stubs.cc \
../base/files/important_file_writer.cc \
../base/files/file_path_watcher_stub.cc \
../base/files/file_util_proxy.cc \
../base/files/memory_mapped_file.cc \
../base/files/scoped_temp_dir.cc \
../base/files/file_path_watcher.cc \
../base/files/file_path_watcher_linux.cc \
../base/files/memory_mapped_file_posix.cc \
../base/files/file_path.cc \
../base/file_util_android.cc \
../base/file_util.cc \
../base/file_util_linux.cc \
../base/file_util_posix.cc \
../base/guid.cc \
../base/guid_posix.cc \
../base/hash.cc \
../base/cancelable_request.cc \
../base/hi_res_timer_manager_posix.cc \
../base/json/json_writer.cc \
../base/json/string_escape.cc \
../base/json/json_reader.cc \
../base/json/json_file_value_serializer.cc \
../base/json/json_parser.cc \
../base/json/json_string_value_serializer.cc \
../base/lazy_instance.cc \
../base/linux_util.cc \
../base/location.cc \
../base/logging.cc \
../base/md5.cc \
../base/memory/discardable_memory.cc \
../base/memory/ref_counted.cc \
../base/memory/singleton.cc \
../base/memory/weak_ptr.cc \
../base/memory/ref_counted_memory.cc \
../base/memory/aligned_memory.cc \
../base/message_loop.cc \
../base/message_loop_proxy.cc \
../base/message_loop_proxy_impl.cc \
../base/message_pump.cc \
../base/message_pump_default.cc \
../base/message_pump_libevent.cc \
../base/metrics/histogram_base.cc \
../base/metrics/histogram.cc \
../base/metrics/bucket_ranges.cc \
../base/metrics/sample_vector.cc \
../base/metrics/stats_counters.cc \
../base/metrics/field_trial.cc \
../base/metrics/histogram_samples.cc \
../base/metrics/histogram_snapshot_manager.cc \
../base/metrics/statistics_recorder.cc \
../base/metrics/stats_table.cc \
../base/metrics/sparse_histogram.cc \
../base/metrics/sample_map.cc \
../base/native_library_posix.cc \
../base/os_compat_android.cc \
../base/path_service.cc \
../base/pending_task.cc \
../base/perftimer.cc \
../base/pickle.cc \
../base/platform_file.cc \
../base/platform_file_posix.cc \
../base/posix/file_descriptor_shuffle.cc \
../base/posix/unix_domain_socket_linux.cc \
../base/posix/global_descriptors.cc \
../base/prefs/pref_service.cc \
../base/prefs/pref_store.cc \
../base/prefs/default_pref_store.cc \
../base/prefs/pref_registry.cc \
../base/prefs/pref_value_map.cc \
../base/prefs/public/pref_change_registrar.cc \
../base/prefs/public/pref_member.cc \
../base/prefs/overlay_user_pref_store.cc \
../base/prefs/pref_service_builder.cc \
../base/prefs/value_map_pref_store.cc \
../base/prefs/pref_value_store.cc \
../base/prefs/pref_registry_simple.cc \
../base/prefs/pref_notifier_impl.cc \
../base/prefs/json_pref_store.cc \
../base/process_linux.cc \
../base/process_posix.cc \
../base/process_util.cc \
../base/process_util_posix.cc \
../base/process_util_linux.cc \
../base/profiler/scoped_profile.cc \
../base/profiler/tracked_time.cc \
../base/profiler/alternate_timer.cc \
../base/rand_util.cc \
../base/rand_util_posix.cc \
../base/run_loop.cc \
../base/safe_strerror_posix.cc \
../base/scoped_native_library.cc \
../base/sequence_checker_impl.cc \
../base/sequenced_task_runner.cc \
../base/sha1_portable.cc \
../base/string16.cc \
../base/string_util.cc \
../base/string_piece.cc \
../base/stringprintf.cc \
../base/strings/utf_offset_string_conversions.cc \
../base/strings/sys_string_conversions_posix.cc \
../base/strings/utf_string_conversion_utils.cc \
../base/strings/string_split.cc \
../base/strings/string_number_conversions.cc \
../base/supports_user_data.cc \
../base/synchronization/waitable_event_watcher_posix.cc \
../base/synchronization/lock_impl_posix.cc \
../base/synchronization/lock.cc \
../base/synchronization/waitable_event_posix.cc \
../base/synchronization/cancellation_flag.cc \
../base/synchronization/condition_variable_posix.cc \
../base/sync_socket_posix.cc \
../base/sys_info.cc \
../base/sys_info_linux.cc \
../base/sys_info_posix.cc \
../base/task_runner.cc \
../base/third_party/icu/icu_utf.cc \
../base/third_party/dmg_fp/dtoa_wrapper.cc \
../base/third_party/dmg_fp/g_fmt.cc \
../base/third_party/dmg_fp/dtoa.cc \
../base/threading/watchdog.cc \
../base/threading/thread_collision_warner.cc \
../base/threading/thread_restrictions.cc \
../base/threading/worker_pool.cc \
../base/threading/thread_local_posix.cc \
../base/threading/thread_checker_impl.cc \
../base/threading/post_task_and_reply_impl.cc \
../base/threading/simple_thread.cc \
../base/threading/thread_id_name_manager.cc \
../base/threading/platform_thread_posix.cc \
../base/threading/sequenced_worker_pool.cc \
../base/threading/worker_pool_posix.cc \
../base/threading/thread_local_storage_posix.cc \
../base/threading/thread.cc \
../base/threading/non_thread_safe_impl.cc \
../base/thread_task_runner_handle.cc \
../base/time/default_tick_clock.cc \
../base/time/clock.cc \
../base/time/tick_clock.cc \
../base/time/default_clock.cc \
../base/time_posix.cc \
../base/timer.cc \
../base/tracked_objects.cc \
../base/tracking_info.cc \
../base/utf_string_conversions.cc \
../base/value_conversions.cc \
../base/values.cc \
../base/version.cc \
../base/vlog.cc \

#LOCAL_LDLIBS := -llog -L$(SYSROOT)/usr/lib
LOCAL_CPPFLAGS := -DOS_POSIX \
		-DOS_LINUX \
		-D__LINUX__ \
		-D__STDC_CONSTANT_MACROS \
		-DBASE_IMPLEMENTATION \
		-D__STDC_FORMAT_MACROS \
		-DENABLE_PEPPER_THREADING \
		-DBOOST_NO_VARIADIC_TEMPLATES \
		-DBOOST_SP_USE_PTHREADS \
		-DNDEBUG \
		-D__ALIGN_4__
  
#include $(BUILD_SHARED_LIBRARY)
include $(BUILD_STATIC_LIBRARY)

#include $(CLEAR_VARS)
#LOCAL_MODULE := hello-jni
#LOCAL_STATIC_LIBRARIES := base
#LOCAL_C_INCLUDES := ./
#LOCAL_SRC_FILES := hello-jni.cc

#include $(BUILD_SHARED_LIBRARY)
