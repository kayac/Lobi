#include "LobiAndroidRec.h"
#include <cocos2d.h>
#include <platform/android/jni/JniHelper.h>

#define CLASS_NAME "com/kayac/lobi/libnakamap/rec/cocos2dx/LobiRecCocos2dx"

#define CALL_STATIC_VOID_METHOD(methodName,signature,...)     \
    JniMethodInfo t; \
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, methodName, signature)) { \
        t.env->CallStaticVoidMethod(t.classID, t.methodID, __VA_ARGS__); \
        t.env->DeleteLocalRef(t.classID); \
    }


using namespace cocos2d;

void LobiAndroidRec::setRecorderSwitch(bool turnedOn) {
    CALL_STATIC_VOID_METHOD("setRecorderSwitch", "(Z)V", turnedOn);
}
bool LobiAndroidRec::getRecorderSwitch() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "getRecorderSwitch", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::startCapturing() {
    CALL_STATIC_VOID_METHOD("startRecording", "()V", NULL);
}
void LobiAndroidRec::stopCapturing() {
    CALL_STATIC_VOID_METHOD("stopRecording", "()V", NULL);
}
void LobiAndroidRec::resumeCapturing() {
    CALL_STATIC_VOID_METHOD("resumeRecording", "()V", NULL);
}
void LobiAndroidRec::pauseCapturing() {
    CALL_STATIC_VOID_METHOD("pauseRecording", "()V", NULL);
}
void LobiAndroidRec::setLiveWipeStatus(int status) {
    CALL_STATIC_VOID_METHOD("setLiveWipeStatus", "(I)V", status);
}
void LobiAndroidRec::setWipeSquareSize(int wipeSize) {
    CALL_STATIC_VOID_METHOD("setWipeSquareSize", "(I)V", wipeSize);
}
void LobiAndroidRec::setWipePosition(int x, int y) {
    CALL_STATIC_VOID_METHOD("setWipePosition", "(II)V", x, y);
}
void LobiAndroidRec::setMicEnable(bool enabled) {
    CALL_STATIC_VOID_METHOD("setMicEnable", "(Z)V", enabled);
}
void LobiAndroidRec::setMicVolume(double volume) {
    CALL_STATIC_VOID_METHOD("setMicVolume", "(D)V", volume);
}
void LobiAndroidRec::setGameSoundVolume(double volume) {
    CALL_STATIC_VOID_METHOD("setGameSoundVolume", "(D)V", volume);
}
void LobiAndroidRec::setHideFaceOnPreview(bool hidden) {
    CALL_STATIC_VOID_METHOD("setHideFaceOnPreview", "(Z)V", hidden);
}
void LobiAndroidRec::setPreventSpoiler(bool enabled) {
    CALL_STATIC_VOID_METHOD("setPreventSpoiler", "(Z)V", enabled);
}
void LobiAndroidRec::setCapturePerFrame(int frames) {
    CALL_STATIC_VOID_METHOD("setCapturePerFrame", "(I)V", frames);
}
void LobiAndroidRec::setStickyRecording(bool enabled) {
    CALL_STATIC_VOID_METHOD("setStickyRecording", "(Z)V", enabled);
}
bool LobiAndroidRec::hasMovie() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "hasMovie", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
bool LobiAndroidRec::isSupported() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "isSupported", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
bool LobiAndroidRec::isCapturing() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "isCapturing", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::presentLobiPostWithTitle(
    const char* title,
    const char* postDescription,
    const jlong postScore,
    const char* postCategory
) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, CLASS_NAME, "openPostVideoActivity",
            "("
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            "J"
            "Ljava/lang/String;"
            ")Z"
            )) {

        jstring jtitle = t.env->NewStringUTF(title);
        jstring jpostDescription = t.env->NewStringUTF(postDescription);
        jstring jpostCategory = t.env->NewStringUTF(postCategory);

        t.env->CallStaticBooleanMethod(
            t.classID, t.methodID, 
            jtitle,
            jpostDescription,
            postScore,
            jpostCategory,
            0,
            0);
        
        t.env->DeleteLocalRef(jtitle);
        t.env->DeleteLocalRef(jpostDescription);
        t.env->DeleteLocalRef(jpostCategory);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named openPostVideoActivity");
    }
}
void LobiAndroidRec::presentLobiPlay() {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, CLASS_NAME, "openLobiPlayActivity", "()Z")) {
        t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
}
