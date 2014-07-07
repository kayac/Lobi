#include "LobiInterface.h"
#include "CCDirector.h"

#import <LobiRec/LobiAndroidRec.h>

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

void LobiInterface::presentRanking()
{
    // unsupported
}

void LobiInterface::sendRanking()
{
    // unsupported
}

void LobiInterface::recStart()
{
    if (!LobiAndroidRec::isSupported()) {
        CCLOG("LobiRec: not supported");
        return;
    }

    LobiAndroidRec::setMicEnable(true);
    LobiAndroidRec::setCapturePerFrame(3);
    LobiAndroidRec::setMicVolume(1.4f);
    LobiAndroidRec::setGameSoundVolume(0.5f);
    LobiAndroidRec::startCapturing();
}

void LobiInterface::wipePostion(float x, float y)
{
    // unsupported
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

void LobiInterface::presentShare()
{
    if (!LobiAndroidRec::isCapturing() && LobiAndroidRec::hasMovie()) {
        LobiAndroidRec::presentLobiPostWithTitle(
            "プレイ動画をシェアします！",
            "神懸ったこの華麗なプレイ。やばい。",
            100,  // score
            ""    // category
            );
    }
}


bool LobiInterface::isRecording()
{
    return LobiAndroidRec::isCapturing();
}

bool LobiInterface::isPause()
{
    // unsupported
}
