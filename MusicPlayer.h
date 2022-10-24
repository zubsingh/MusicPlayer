//
// Created by Zubin Singh on 14/10/22.
//

#ifndef PATTERNS_MUSICPLAYER_H
#define PATTERNS_MUSICPLAYER_H

#include "MusicPlayerState.h"

class MusicPlayerState;

class MusicPlayer{
public:
    enum State{
        ST_STOPPED,
        ST_PLAYING,
        ST_PAUSED
    };

    MusicPlayer();
    virtual ~MusicPlayer();

    void Play();
    void Pause();
    void Stop();

    void setState(State state);

private:
    MusicPlayerState * m_pState;
};

#endif //PATTERNS_MUSICPLAYER_H
