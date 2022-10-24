//
// Created by Zubin Singh on 14/10/22.
//

#ifndef PATTERNS_STOPPEDSTATE_H
#define PATTERNS_STOPPEDSTATE_H

#include "MusicPlayerState.h"

class StoppedState : public MusicPlayerState{
public:
    StoppedState();
    virtual ~StoppedState();

    virtual void Play(MusicPlayer *state);
};

#endif //PATTERNS_STOPPEDSTATE_H
