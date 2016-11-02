//
//  LobiInterface.h
//  RecTest
//
//  Created by takahashi-kohei on 2014/01/28.
//
//
 
#ifndef __cocos2dx__KLMCaptureInterface__
#define __cocos2dx__KLMCaptureInterface__
 
namespace LobiInterface
{
    bool shouldUseRecAfterNougat();
    bool isSignedIn();
    void presentProfile();
    void presentChat();
    void presentLobiPlay();
    void presentLobiPlay(
        const char* userExid,
        const char* category,
        const bool letsplay,
        const char* metaJson
    );
    void presentLobiPlayWithEventFields(
        const char* eventFields
    );
    
    void prepareExternalId(
        char* encryptedExternalId,
        char* iv,
        char* accountBaseName);
    void enableStrictExid();
     
    void presentRanking();
    void sendRanking();
     
    void prepare();
    void recStart();
    void recStop();
    bool isRecording();
    void recPause();
    void recResume();
    bool isPause(); // deprecated
    bool isPaused();
    void reset();
 
    void presentShare();
    
    void initOpenSLAudio();

    bool removeUnretainedVideo();
    int  uploadQueueCount();
    void setClientId(const char* clientId);
    
    void  showDownloadLobiDialog();
}
 
#endif
