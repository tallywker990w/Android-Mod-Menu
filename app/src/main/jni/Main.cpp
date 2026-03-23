#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_support_Launcher_setTitle(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF("Prism Menu");
}
