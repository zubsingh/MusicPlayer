//
// Created by Zubin Singh on 14/10/22.
//

#ifndef PATTERNS_PAUSEDSTATE_H
#define PATTERNS_PAUSEDSTATE_H

#include "MusicPlayerState.h"

class PausedState : public MusicPlayerState{
public:
    PausedState();
    virtual ~PausedState();
    virtual void Play(MusicPlayer *state);
    virtual void Stop(MusicPlayer *state);
};

#endif //PATTERNS_PAUSEDSTATE_H
