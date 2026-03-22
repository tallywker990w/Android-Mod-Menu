#include <jni.h>
#include <string>
#include <fstream>
#include <sys/stat.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_support_Launcher_setTitle(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF("Prism Menu");
}

void SaveScript(std::string name, std::string content) {
    std::string path = "/storage/emulated/0/Documents/Prism/Scripts/";
    mkdir("/storage/emulated/0/Documents/Prism/", 0777);
    mkdir(path.c_str(), 0777);
    std::ofstream file(path + name + ".lua");
    file << content;
    file.close();
}
