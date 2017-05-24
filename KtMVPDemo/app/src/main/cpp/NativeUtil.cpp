/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string>
/* Header for class net_yxcoding_ktmvp_nativejni_NativeUtil_Companion */

#ifndef _Included_net_yxcoding_ktmvp_nativejni_NativeUtil_Companion
#define _Included_net_yxcoding_ktmvp_nativejni_NativeUtil_Companion
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_yxcoding_ktmvp_nativejni_NativeUtil_Companion
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_yxcoding_ktmvp_nativejni_NativeUtil_00024Companion_stringFromJNI
        (JNIEnv *env, jobject) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

/*
 * Class:     net_yxcoding_ktmvp_nativejni_NativeUtil_Companion
 * Method:    add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_yxcoding_ktmvp_nativejni_NativeUtil_00024Companion_add
        (JNIEnv *env, jobject, jint a, jint b) {
    int c = a + b;
    return c;
}

/*
 * Class:     net_yxcoding_ktmvp_nativejni_NativeUtil_Companion
 * Method:    contactStr
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_yxcoding_ktmvp_nativejni_NativeUtil_00024Companion_contactStr
        (JNIEnv *env, jobject, jstring jstr) {
    char *str = (char *) env->GetStringUTFChars(jstr, NULL);
    std::string s = "yxcoding," + std::string(str);
    return env->NewStringUTF(s.c_str());
}

#ifdef __cplusplus
}
#endif
#endif
