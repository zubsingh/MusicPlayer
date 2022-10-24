//
// Created by Zubin Singh on 14/10/22.
//

#ifndef PATTERNS_PLAYINGSTATE_H
#define PATTERNS_PLAYINGSTATE_H

#include "MusicPlayerState.h"

class PlayingState : public MusicPlayerState{
public:
    PlayingState();
    virtual ~PlayingState();
    virtual void Pause(MusicPlayer *state);
    virtual void Stop(MusicPlayer *state);
};

#endif //PATTERNS_PLAYINGSTATE_H
