#include "LobiAudioEngine.h"
#include <cocos2d.h>
#include <cstdio>
#include <platform/android/jni/JniHelper.h>
#include <stdlib.h>

#define CLASS_NAME "com/kayac/lobi/libnakamap/rec/cocos2dx/LobiAudioEngine"

#define CALL_STATIC_VOID_METHOD(methodName,signature,...) \
    JniMethodInfo t; \
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, methodName, signature)) { \
        t.env->CallStaticVoidMethod(t.classID, t.methodID, __VA_ARGS__); \
        t.env->DeleteLocalRef(t.classID); \
    }

using namespace cocos2d;
using namespace cocos2d::experimental;

const int LobiAudioEngine::INVALID_AUDIO_ID = -1;
const float LobiAudioEngine::TIME_UNKNOWN = -1.0f;

bool LobiAudioEngine::isEnable() {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "isEnable", "()Z")) {
        return t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
    }
    return false;
}

int LobiAudioEngine::play2d(LobiAudioPlayer* player, std::string path, bool isLoop, float volume) {
    int ret = INVALID_AUDIO_ID;

    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "play2d", "(JLjava/lang/String;ZF)I")) {
        jstring jstringPath = t.env->NewStringUTF(path.c_str());

        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, (jlong)player, jstringPath, isLoop, volume);

        t.env->DeleteLocalRef(t.classID);
        t.env->DeleteLocalRef(jstringPath);
    }

    return ret;
}

void LobiAudioEngine::setVolume(int audioId, float volume) {
    CALL_STATIC_VOID_METHOD("setVolume", "(IF)V", audioId, volume);
}

void LobiAudioEngine::setLoop(int audioId, bool loop) {
    CALL_STATIC_VOID_METHOD("setLoop", "(IZ)V", audioId, loop);
}

void LobiAudioEngine::pause(int audioId) {
    CALL_STATIC_VOID_METHOD("pause", "(I)V", audioId);
}

void LobiAudioEngine::resume(int audioId) {
    CALL_STATIC_VOID_METHOD("resume", "(I)V", audioId);
}

void LobiAudioEngine::stop(int audioId) {
    CALL_STATIC_VOID_METHOD("stop", "(I)V", audioId);
}

float LobiAudioEngine::getDuration(int audioId) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "getDuration", "(I)F")) {
        return t.env->CallStaticFloatMethod(t.classID, t.methodID, audioId);
    }
    return TIME_UNKNOWN;
}

float LobiAudioEngine::getCurrentTime(int audioId) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "getCurrentTime", "(I)F")) {
        return t.env->CallStaticFloatMethod(t.classID, t.methodID, audioId);
    }
    return 0.0f;
}

bool LobiAudioEngine::setCurrentTime(int audioId, float time) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "setCurrentTime", "(IF)Z")) {
        return t.env->CallStaticBooleanMethod(t.classID, t.methodID, audioId, time);
    }
    return false;
}

JNIEXPORT void JNICALL Java_com_kayac_lobi_libnakamap_rec_cocos2dx_LobiAudioEngine_nativePlayOver
(JNIEnv *env, jobject, jlong player) {
    ((LobiAudioPlayer*)player)->playOver();
}
