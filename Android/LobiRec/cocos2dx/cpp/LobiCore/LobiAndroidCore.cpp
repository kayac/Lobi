#include "LobiAndroidCore.h"
#include <cocos2d.h>
#include <platform/android/jni/JniHelper.h>

using namespace cocos2d;

void LobiAndroidCore::prepareExternalId(
        const char* encryptedExternalId,
        const char* iv,
        const char* accountBaseName
) {
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(
            t, "com/kayac/lobi/sdk/LobiCore", "prepareExternalId",
            "("
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            "Ljava/lang/String;"
            ")V"
            )) {

        jstring jexid = t.env->NewStringUTF(encryptedExternalId);
        jstring jiv = t.env->NewStringUTF(iv);
        jstring jaccountBaseName = t.env->NewStringUTF(accountBaseName);

        t.env->CallStaticVoidMethod(
            t.classID, t.methodID, 
            jexid,
            jiv,
            jaccountBaseName,
            0,
            0);
        
        t.env->DeleteLocalRef(jexid);
        t.env->DeleteLocalRef(jiv);
        t.env->DeleteLocalRef(jaccountBaseName);
        
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named prepareExternalId");
    }
}

void LobiAndroidCore::enableStrictExid()
{
    JniMethodInfo t;
    if (JniHelper::getStaticMethodInfo(t, "com/kayac/lobi/sdk/LobiCore", "enableStrictExid", "()V")) {
        t.env->CallStaticBooleanMethod(t.classID, t.methodID, 0, 0);
        t.env->DeleteLocalRef(t.classID);
    } else {
        CCLOG("failed to find method named enableStrictExid");
    }
}
