#ifndef __LOBI_ANDROID_CORE__
#define __LOBI_ANDROID_CORE__

#include <jni.h>

class LobiAndroidCore {
public:
    static void prepareExternalId(
        const char* encryptedExternalId,
        const char* iv,
        const char* accountBaseName);
    static void enableStrictExid();
};


#endif // __LOBI_ANDROID_CORE__
