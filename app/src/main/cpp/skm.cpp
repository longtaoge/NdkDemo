#include <jni.h>
#include <string>
#include "com_aisino_taxcode_skm.h"
// Created by longtaoge on 2018/2/3.
//
extern "C"
JNIEXPORT jstring JNICALL
Java_com_aisino_taxcode_skm_get_1dzfp_1skm
  (JNIEnv* env, jclass, jstring, jint, jstring, jstring, jint){

    std::string hello = " hehe he he ";
       return env->NewStringUTF(hello.c_str());
  };

