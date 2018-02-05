#include <jni.h>
#include <string>
#include "org_xiangbalao_ndkdemo_MainActivity.h"
extern "C"
JNIEXPORT jstring JNICALL
Java_org_xiangbalao_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello jin  from C++";
    return env->NewStringUTF(hello.c_str());
}
