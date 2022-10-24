//
// Created by Zubin Singh on 11/10/22.
//

#ifndef MUSIC_PLAYER_STATE_H
#define MUSIC_PLAYER_STATE_H

#include <string>
#include "MusicPlayer.h"

class MusicPlayer;

class MusicPlayerState{
public:
    MusicPlayerState(std::string name);
    virtual ~MusicPlayerState();

    virtual void Play(MusicPlayer *player);
    virtual void Pause(MusicPlayer *player);
    virtual void Stop(MusicPlayer *player);

    std::string GetName() {return m_name; };

private:
    std::string m_name;
};

#endif //MUSIC_PLAYER_STATE_H
