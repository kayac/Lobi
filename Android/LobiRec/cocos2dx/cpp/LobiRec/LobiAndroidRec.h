#ifndef __LOBI_ANDROID_REC__
#define __LOBI_ANDROID_REC__

#include <jni.h>

class LobiAndroidRec {
public:
    enum LiveWipeStatus {
        LIVE_WIPE_STATUS_NONE = 0,
        LIVE_WIPE_STATUS_IN_CAMERA,
        LIVE_WIPE_STATUS_ICON
    };

    static int NO_ERROR;
    static int ERROR_BAD_ENCODER_CONNECTION;
    static int ERROR_FAILED_TO_LOAD_NATIVE_LIBRARY;

    static bool shouldUseRecAfterNougat();
    static void setRecorderSwitch(bool turnedOn);
    static bool getRecorderSwitch();
    static void prepareRecorder();
    static bool isPrepareRecording();
    static void startCapturing();
    static void stopCapturing();
    static void resumeCapturing();
    static void pauseCapturing();
    static void resetRecorder();
    static bool isFaceCaptureSupported();
    static void setLiveWipeStatus(LiveWipeStatus status);
    static LiveWipeStatus getLiveWipeStatus();
    static void setWipeSquareSize(int wipeSize);
    static int getWipeSquareSize();
    static void setWipePosition(int x, int y);
    static int getWipePositionX();
    static int getWipePositionY();
    static void setMicEnable(bool enabled);
    static void setMicVolume(double volume);
    static void setGameSoundVolume(double volume);
    static void setHideFaceOnPreview(bool hidden);
    static void setPreventSpoiler(bool enabled);
    static void setCapturePerFrame(int frames);
    static void setStickyRecording(bool enabled);
    static bool hasMovie();
    static bool isSupported();
    static int checkError();
    static bool isCapturing();
    static bool isPaused();
    static void presentLobiPostWithTitle(
        const char* title,
        const char* postDescription,
        const jlong postScore,
        const char* postCategory);
    static void presentLobiPostWithTitle(
        const char* title,
        const char* postDescription,
        const jlong postScore,
        const char* postCategory,
        const char* postMetadata);
    static void presentLobiPlay();
    static void presentLobiPlay(
        const char* userExid,
        const char* category,
        const bool letsplay,
        const char* metaJson
    );
    static void presentLobiPlay(const char* videoId);
    static void presentLobiPlayWithEventFields(const char* eventFields);
    static void initOpenSLAudio(int sampleRate);
    static void setSecretMode(bool secretMode);
    static void setLoggingEnable(bool enabled);
    static bool removeUnretainedVideo();
    static int  uploadQueueCount();
    static void removeAllUploadingVideos();
    static void showDownloadLobiDialog();

private:
    static bool sUseRecNougat;
    static const char* sClassName;

    static void setting();
    static bool useRecNougat();
    static const char* getClassName();
};


#endif // __LOBI_ANDROID_REC__
