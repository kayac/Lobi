#include "LobiInterface.h"

#include "LobiRec/LobiAndroidRec.h"
#include "LobiCore/LobiAndroidCore.h"

bool LobiInterface::shouldUseRecAfterNougat()
{
    return LobiAndroidRec::shouldUseRecAfterNougat();
}

bool LobiInterface::isSignedIn()
{
    return LobiAndroidCore::isSignedIn();
}

void LobiInterface::presentProfile()
{
    // unsupported
}

void LobiInterface::presentChat()
{
    // unsupported
}

void LobiInterface::presentLobiPlay()
{
    LobiAndroidRec::presentLobiPlay();
}

void LobiInterface::presentLobiPlay(
    const char* userExid,
    const char* category,
    const bool letsplay,
    const char* metaJson
)
{
    LobiAndroidRec::presentLobiPlay(userExid, category, letsplay, metaJson);
}
void LobiInterface::presentLobiPlayWithEventFields(
    const char* eventFields
)
{
    LobiAndroidRec::presentLobiPlayWithEventFields(eventFields);
}

void LobiInterface::prepareExternalId(
        char* encryptedExternalId,
        char* iv,
        char* accountBaseName)
{
    LobiAndroidCore::prepareExternalId(encryptedExternalId, iv, accountBaseName);
}

void LobiInterface::enableStrictExid()
{
    LobiAndroidCore::enableStrictExid();
}

void LobiInterface::presentRanking()
{
    // unsupported
}

void LobiInterface::sendRanking()
{
    // unsupported
}

void LobiInterface::prepare() {
    if (LobiAndroidRec::isSupported()) {
        LobiAndroidRec::prepareRecorder();
    } else {
        LobiAndroidRec::showDownloadLobiDialog();
    }
}

void LobiInterface::recStart()
{
    if (!LobiAndroidRec::isSupported()) {
        return;
    }

    LobiAndroidRec::setMicEnable(true);
    LobiAndroidRec::setCapturePerFrame(3);
    LobiAndroidRec::setMicVolume(1.4f);
    LobiAndroidRec::setGameSoundVolume(0.5f);
    if (LobiAndroidRec::isFaceCaptureSupported()) {
        LobiAndroidRec::setLiveWipeStatus(LobiAndroidRec::LIVE_WIPE_STATUS_IN_CAMERA);
        LobiAndroidRec::setWipeSquareSize(100);
        LobiAndroidRec::setWipePosition(10, 10);
    }
    LobiAndroidRec::startCapturing();
}

void LobiInterface::recStop()
{
    LobiAndroidRec::stopCapturing();
}

void LobiInterface::recPause()
{
    LobiAndroidRec::pauseCapturing();
}

void LobiInterface::recResume()
{
    LobiAndroidRec::resumeCapturing();
}

void LobiInterface::reset()
{
    LobiAndroidRec::resetRecorder();
}

void LobiInterface::presentShare()
{
    LobiAndroidRec::presentLobiPostWithTitle(
        "プレイ動画をシェアします！",
        "神懸ったこの華麗なプレイ。やばい。",
        100,  // score
        "",   // category
        ""    // metaData
        );
}


bool LobiInterface::isRecording()
{
    return LobiAndroidRec::isCapturing();
}

bool LobiInterface::isPause()
{
    return isPaused();
}

bool LobiInterface::isPaused()
{
    return LobiAndroidRec::isPaused();
}

void LobiInterface::initOpenSLAudio()
{
    LobiAndroidRec::initOpenSLAudio(22050);
}

bool LobiInterface::removeUnretainedVideo()
{
    return LobiAndroidRec::removeUnretainedVideo();
}

int LobiInterface::uploadQueueCount()
{
    return LobiAndroidRec::uploadQueueCount();
}

void LobiInterface::setClientId(const char* clientId)
{
    LobiAndroidCore::setClientId(clientId);
}

void LobiInterface::showDownloadLobiDialog()
{
    LobiAndroidRec::showDownloadLobiDialog();
}
