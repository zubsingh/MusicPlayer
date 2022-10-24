//
// Created by Zubin Singh on 14/10/22.
//
#include "PlayingState.h"
#include "MusicPlayer.h"

PlayingState::PlayingState()
        : MusicPlayerState(std::string("Playing")) {
}

PlayingState::~PlayingState() {
}

void PlayingState::Pause(MusicPlayer * player)
{
    player->setState(MusicPlayer::ST_PAUSED);
}

void PlayingState::Stop(MusicPlayer * player)
{
    player->setState(MusicPlayer::ST_STOPPED);
}
