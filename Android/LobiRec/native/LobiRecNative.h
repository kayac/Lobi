#ifndef LOBI_REC_NATIVE_H
#define LOBI_REC_NATIVE_H

#include <android/native_activity.h>

//Return value of LobiRec_checkError()
#define LOBI_REC_NO_ERROR 0;
#define LOBI_REC_ERROR_BAD_ENCODER_CONNECTION = 0x80000001;

#ifdef __cplusplus
extern "C" {
#endif

void LobiRec_initCapture(int width, int height);
void LobiRec_initOpenSLAudio(int sampleRate);
void LobiRec_setRecorderSwitch(bool turnedOn);
bool LobiRec_getRecorderSwitch();
void LobiRec_setMicEnable(bool enabled);
bool LobiRec_getMicEnable();
void LobiRec_setMicVolume(double volume);
float LobiRec_getMicVolume();
void LobiRec_setGameSoundVolume(double volume);
float LobiRec_getGameSoundVolume();
void LobiRec_setPreventSpoiler(bool enabled);
void LobiRec_setCapturePerFrame(int frames);
int LobiRec_getCapturePerFrame();
void LobiRec_setSecretMode(bool secretMode);
void LobiRec_setLoggingEnable(bool enabled);
void LobiRec_setStickyRecording(bool enabled);
bool LobiRec_getStickyRecording();
void LobiRec_setLiveWipeStatus(int status);
void LobiRec_setWipeSquareSize(int wipeSize);
void LobiRec_setWipePosition(int x, int y);
void LobiRec_setHideFaceOnPreview(bool hidden);
void LobiRec_cameraPreRender();
void LobiRec_onEndOfFrame();
void LobiRec_cameraCaptureAndRender();
void LobiRec_startCapturing();
void LobiRec_stopCapturing();
void LobiRec_resumeCapturing();
void LobiRec_pauseCapturing();
bool LobiRec_openPostVideoActivity(
        char* title,
        char* postDescription,
        long postScore,
        char* postCategory,
        char* postMetadata
);
bool LobiRec_openLobiPlayActivity(
        char* userExid,
        char* category,
        bool letsplay,
        char* metaJson
);
bool LobiRec_openLobiPlayActivityWithEventFields(char* eventFields);
bool LobiRec_isSupported();
bool LobiRec_isCapturing();
bool LobiRec_isPaused();
bool LobiRec_isInitialized();
bool LobiRec_isSecretMode();
bool LobiRec_hasMovie();
int LobiRec_checkError();
int LobiRec_uploadQueueCount();
bool LobiRec_removeUnretainedVideo();
void LobiRec_removeAllUploadingVideos();

#ifdef __cplusplus
}
#endif

#endif
