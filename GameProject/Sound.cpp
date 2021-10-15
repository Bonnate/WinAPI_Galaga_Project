#include "framework.h"

Sound::Sound(const char* SoundNamePath, string soundHierName) : GameObject("", soundHierName, true, .0f, .0f)
{
    this->mSoundName = SoundNamePath;
}

Sound::~Sound()
{
    mSystem->release();
}

void Sound::start()
{
    this->mResult = FMOD::System_Create(&mSystem);
    if (mResult != FMOD_OK) exit(-1);                  

    mResult = mSystem->getVersion(&mVersion);
    if (mResult != FMOD_OK) exit(-1);
    else printf("FMOD version %08x ·ÎµåµÊ\n", mVersion);

    mResult = mSystem->init(32, FMOD_INIT_NORMAL, mExtradriverdata);  
    if (mResult != FMOD_OK) exit(-1);

    mResult = mSystem->createSound(mSoundName, FMOD_LOOP_OFF, 0, &mSound); 
    if (mResult != FMOD_OK) exit(-1);
}

void Sound::update()
{
    mResult = mSystem->update();
    if (mResult != FMOD_OK) exit(-1);
}

void Sound::playSound()
{
    mResult = mSystem->playSound(mSound, 0, false, &mChannel);
    if (mResult != FMOD_OK) exit(-1);
}