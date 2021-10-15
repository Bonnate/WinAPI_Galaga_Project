#pragma once

#include "fmod.hpp"

class Sound : public GameObject
{
private:
    const char* mSoundName;

    FMOD::System* mSystem;
    FMOD::Sound* mSound;
    FMOD::Channel* mChannel;
    FMOD_RESULT       mResult;
    unsigned int      mVersion;
    void* mExtradriverdata;

public:
    Sound(const char* SoundNamePath, string soundHierName);
    ~Sound();

    void start();
    void update();
    void playSound();
    
};