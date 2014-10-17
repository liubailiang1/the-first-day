LOCAL_PATH:=$(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_TAGS=eng

LOCAL_SRC_FILES := \
    is_wireless.c

###this not work, must add it to LOCAL_LDFLAGS 20141017
#LOCAL_STATIC_LIBRARIES := libifaddrs

LOCAL_LDFLAGS := -L$(LOCAL_PATH)/../../ifaddrs/obj/local/armeabi -lifaddrs
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../ifaddrs/jni
LOCAL_MODULE := is_wireless_arm
include $(BUILD_EXECUTABLE)
