/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kr_promu_caireen_jni_service_NativeImageProcessor */

#ifndef _Included_kr_promu_caireen_jni_service_NativeImageProcessor
#define _Included_kr_promu_caireen_jni_service_NativeImageProcessor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     kr_promu_caireen_jni_service_NativeImageProcessor
 * Method:    getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kr_promu_caireen_jni_service_NativeImageProcessor_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     kr_promu_caireen_jni_service_NativeImageProcessor
 * Method:    request
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_kr_promu_caireen_jni_service_NativeImageProcessor_request
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     kr_promu_caireen_jni_service_NativeImageProcessor
 * Method:    answer
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_kr_promu_caireen_jni_service_NativeImageProcessor_answer
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     kr_promu_caireen_jni_service_NativeImageProcessor
 * Method:    notify
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_kr_promu_caireen_jni_service_NativeImageProcessor_notify
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
