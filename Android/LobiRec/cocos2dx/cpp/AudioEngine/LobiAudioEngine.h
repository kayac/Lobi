#ifndef __LOBI_AUDIO_ENGINE__
#define __LOBI_AUDIO_ENGINE__

#include <jni.h>
#include <string>
#include <AudioEngine-inl.h>

#define LOBI_AUDIO_ENGINE_TIME_UNKNOWN -1.0f

using namespace cocos2d::experimental;

class LobiAudioEngine
{
public:
    static const int INVALID_AUDIO_ID;
    static const float TIME_UNKNOWN;

    static bool isEnable();
    static int play2d(LobiAudioPlayer *plyer, std::string pPath, bool isLoop, float volume);
    static void setVolume(int audioId, float volume);
    static void setLoop(int audioId, bool loop);
    static void pause(int audioId);
    static void resume(int audioId);
    static void stop(int audioId);
    static void remove(int audioID);
    static float getDuration(int audioId);
    static float getCurrentTime(int audioId);
    static bool setCurrentTime(int audioId, float time);
};

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_kayac_lobi_libnakamap_rec_cocos2dx_LobiAudioEngine_nativePlayOver
(JNIEnv *env, jobject, jlong player);

#ifdef __cplusplus
}
#endif

#endif // __LOBI_ANDROID_AUDIO_ENGINE__
