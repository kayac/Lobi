#include "LobiAndroidRec.h"
#include <cocos2d.h>
#include <platform/android/jni/JniHelper.h>

#define LOBI_REC_COCOS2DX_CLASS_NAME "com/kayac/lobi/libnakamap/rec/cocos2dx/LobiRecCocos2dx"
#define LOBI_REC_NOUGAT_COCOS2DX_CLASS_NAME "com/kayac/lobi/libnakamap/rec/nougat/LobiRecNougatCocos2dx"

#define CALL_STATIC_VOID_METHOD(methodName,signature,...)     \
    JniMethodInfo t; \
    if (JniHelper::getStaticMethodInfo(t, getClassName(), methodName, signature)) { \
        t.env->CallStaticVoidMethod(t.classID, t.methodID, __VA_ARGS__); \
        t.env->DeleteLocalRef(t.classID); \
    }


using namespace cocos2d;

// /src/com/kayac/lobi/libnakamap/rec/LobiRec.java と同一の定義をすること。
int LobiAndroidRec::NO_ERROR = 0;
int LobiAndroidRec::ERROR_BAD_ENCODER_CONNECTION = 0x80000001;
int LobiAndroidRec::ERROR_FAILED_TO_LOAD_NATIVE_LIBRARY = 0x80000002;

bool LobiAndroidRec::sUseRecNougat;
const char* LobiAndroidRec::sClassName;

void LobiAndroidRec::setting() {
    sUseRecNougat = shouldUseRecAfterNougat();
    sClassName = sUseRecNougat ?
        LOBI_REC_NOUGAT_COCOS2DX_CLASS_NAME : LOBI_REC_COCOS2DX_CLASS_NAME;
}

bool LobiAndroidRec::useRecNougat() {
    if (sClassName == NULL) {
        setting();
    }

    return sUseRecNougat;
}

const char* LobiAndroidRec::getClassName() {
    if (sClassName == NULL) {
        setting();
    }

    return sClassName;
}

bool LobiAndroidRec::shouldUseRecAfterNougat() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, LOBI_REC_NOUGAT_COCOS2DX_CLASS_NAME, "shouldUseRecAfterNougat", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}

void LobiAndroidRec::setRecorderSwitch(bool turnedOn) {
    CALL_STATIC_VOID_METHOD("setRecorderSwitch", "(Z)V", turnedOn);
}
bool LobiAndroidRec::getRecorderSwitch() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "getRecorderSwitch", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}

void LobiAndroidRec::prepareRecorder() {
    if (useRecNougat()) {
        CALL_STATIC_VOID_METHOD("prepareRecorder", "()V", NULL);
    }
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
void LobiAndroidRec::resetRecorder() {
    if (useRecNougat()) {
        CALL_STATIC_VOID_METHOD("resetRecorder", "()V", NULL);
    }
}
bool LobiAndroidRec::isFaceCaptureSupported() {
    if (useRecNougat()) {
        return false;
    }

    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "isFaceCaptureSupported", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::setLiveWipeStatus(LiveWipeStatus status) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setLiveWipeStatus", "(I)V", (int)status);
}
LobiAndroidRec::LiveWipeStatus LobiAndroidRec::getLiveWipeStatus() {
    if (useRecNougat()) {
        return LobiAndroidRec::LIVE_WIPE_STATUS_NONE;
    }

    LiveWipeStatus ret = LobiAndroidRec::LIVE_WIPE_STATUS_NONE;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "getLiveWipeStatus", "()I")) {
        ret = (LiveWipeStatus)t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::setWipeSquareSize(int wipeSize) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setWipeSquareSize", "(I)V", wipeSize);
}
int LobiAndroidRec::getWipeSquareSize() {
    if (useRecNougat()) {
        return 0;
    }

    int ret = 0;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "getWipeSquareSize", "()I")) {
        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::setWipePosition(int x, int y) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setWipePosition", "(II)V", x, y);
}
int LobiAndroidRec::getWipePositionX() {
    if (useRecNougat()) {
        return 0;
    }

    int ret = 0;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "getWipePositionX", "()I")) {
        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
int LobiAndroidRec::getWipePositionY() {
    if (useRecNougat()) {
        return 0;
    }

    int ret = 0;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "getWipePositionY", "()I")) {
        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
void LobiAndroidRec::setMicEnable(bool enabled) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setMicEnable", "(Z)V", enabled);
}
void LobiAndroidRec::setMicVolume(double volume) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setMicVolume", "(D)V", volume);
}
void LobiAndroidRec::setGameSoundVolume(double volume) {
    if (useRecNougat()) {
        return;
    }
    CALL_STATIC_VOID_METHOD("setGameSoundVolume", "(D)V", volume);
}
void LobiAndroidRec::setHideFaceOnPreview(bool hidden) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setHideFaceOnPreview", "(Z)V", hidden);
}
void LobiAndroidRec::setPreventSpoiler(bool enabled) {
    if (useRecNougat()) {
        return;
    }

    CALL_STATIC_VOID_METHOD("setPreventSpoiler", "(Z)V", enabled);
}
void LobiAndroidRec::setCapturePerFrame(int frames) {
    if (useRecNougat()) {
        return;
    }
    CALL_STATIC_VOID_METHOD("setCapturePerFrame", "(I)V", frames);
}
void LobiAndroidRec::setStickyRecording(bool enabled) {
    CALL_STATIC_VOID_METHOD("setStickyRecording", "(Z)V", enabled);
}
bool LobiAndroidRec::hasMovie() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "hasMovie", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
bool LobiAndroidRec::isSupported() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "isSupported", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
int LobiAndroidRec::checkError() {
    int ret = NO_ERROR;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "checkError", "()I")) {
        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
bool LobiAndroidRec::isCapturing() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "isCapturing", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}
bool LobiAndroidRec::isPaused() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "isPaused", "()Z")) {
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
    LobiAndroidRec::presentLobiPostWithTitle(
        title,
        postDescription,
        postScore,
        postCategory,
        ""
    );
}
void LobiAndroidRec::presentLobiPostWithTitle(
    const char* title,
    const char* postDescription,
    const jlong postScore,
    const char* postCategory,
    const char* postMetadata
) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, getClassName(), "openPostVideoActivity",
            "("
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            "J"
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            ")Z"
            )) {

        jstring jtitle = t.env->NewStringUTF(title);
        jstring jpostDescription = t.env->NewStringUTF(postDescription);
        jstring jpostCategory = t.env->NewStringUTF(postCategory);
        jstring jpostMetadata = t.env->NewStringUTF(postMetadata);

        t.env->CallStaticBooleanMethod(
            t.classID, t.methodID, 
            jtitle,
            jpostDescription,
            postScore,
            jpostCategory,
            jpostMetadata,
            0,
            0);
        
        t.env->DeleteLocalRef(jtitle);
        t.env->DeleteLocalRef(jpostDescription);
        t.env->DeleteLocalRef(jpostCategory);
        t.env->DeleteLocalRef(jpostMetadata);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named openPostVideoActivity");
    }
}

void LobiAndroidRec::presentLobiPlay() {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "openLobiPlayActivity", "()Z")) {
        t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
}

void LobiAndroidRec::presentLobiPlay(const char* videoId) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, getClassName(), "openLobiPlayActivity",
            "("
            "Ljava/lang/String;"
            ")Z"
            )) {

        jstring jvideoId = t.env->NewStringUTF(videoId);

        t.env->CallStaticBooleanMethod(
            t.classID, t.methodID, 
            jvideoId,
            0,
            0);
        
        t.env->DeleteLocalRef(jvideoId);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named openLobiPlayActivity");
    }
}

void LobiAndroidRec::presentLobiPlay(
    const char* userExid,
    const char* category,
    const bool letsplay,
    const char* metaJson
) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, getClassName(), "openLobiPlayActivity",
            "("
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            "Z"
            "Ljava/lang/String;"
            ")Z"
            )) {

        jstring juserExid = t.env->NewStringUTF(userExid);
        jstring jcategory = t.env->NewStringUTF(category);
        jstring jmetaJson = t.env->NewStringUTF(metaJson);

        t.env->CallStaticBooleanMethod(
            t.classID, t.methodID, 
            juserExid,
            jcategory,
            letsplay,
            jmetaJson,
            0,
            0);
        
        t.env->DeleteLocalRef(juserExid);
        t.env->DeleteLocalRef(jcategory);
        t.env->DeleteLocalRef(jmetaJson);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named openLobiPlayActivity");
    }
}

void LobiAndroidRec::presentLobiPlayWithEventFields(
    const char* eventFields
) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, getClassName(), "openLobiPlayActivityWithEventFields",
            "("
            "Ljava/lang/String;"
            ")Z"
            )) {

        jstring jeventFields = t.env->NewStringUTF(eventFields);

        t.env->CallStaticBooleanMethod(
            t.classID, t.methodID, 
            jeventFields);
        
        t.env->DeleteLocalRef(jeventFields);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named openLobiPlayActivityWithEventFields");
    }
}

void LobiAndroidRec::initOpenSLAudio(int sampleRate) {
    CALL_STATIC_VOID_METHOD("initOpenSLAudio", "(I)V", sampleRate);
}

void LobiAndroidRec::setSecretMode(bool secretMode) {
    CALL_STATIC_VOID_METHOD("setSecretMode", "(Z)V", secretMode);
}

void LobiAndroidRec::setLoggingEnable(bool enabled) {
    CALL_STATIC_VOID_METHOD("setLoggingEnable", "(Z)V", enabled);
}

bool LobiAndroidRec::removeUnretainedVideo() {
    bool ret = false;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "removeUnretainedVideo", "()Z")) {
        ret = t.env->CallStaticBooleanMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}

int LobiAndroidRec::uploadQueueCount()
{
    int ret = 0;
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, getClassName(), "uploadQueueCount", "()I")) {
        ret = t.env->CallStaticIntMethod(t.classID, t.methodID, NULL);
        t.env->DeleteLocalRef(t.classID);
    }
    return ret;
}

void LobiAndroidRec::removeAllUploadingVideos()
{
    CALL_STATIC_VOID_METHOD("removeAllUploadingVideos", "()V", NULL);
}

void LobiAndroidRec::showDownloadLobiDialog()
{
    if (useRecNougat()) {
        CALL_STATIC_VOID_METHOD("showDownloadLobiDialog", "()V", NULL);
    }
}
