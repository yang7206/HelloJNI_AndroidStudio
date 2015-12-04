//
// Created by Administrator on 2015/12/4.
//

#include "com_yang_www_utils_AppUtils.h"

JNIEXPORT jstring JNICALL Java_com_yang_www_utils_AppUtils_getStringFromJni
        (JNIEnv *env, jclass cls){
    return (*env).NewStringUTF("Hello,This is from Jni");
}