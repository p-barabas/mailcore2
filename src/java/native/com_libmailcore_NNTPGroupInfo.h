/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_NNTPGroupInfo */

#ifndef _Included_com_libmailcore_NNTPGroupInfo
#define _Included_com_libmailcore_NNTPGroupInfo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_libmailcore_NNTPGroupInfo
 * Method:    setName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_NNTPGroupInfo_setName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_NNTPGroupInfo
 * Method:    name
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_NNTPGroupInfo_name
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_NNTPGroupInfo
 * Method:    setMessageCount
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_NNTPGroupInfo_setMessageCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_NNTPGroupInfo
 * Method:    messageCount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_NNTPGroupInfo_messageCount
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_NNTPGroupInfo
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_NNTPGroupInfo_setupNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif