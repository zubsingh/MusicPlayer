//
// Created by Zubin Singh on 14/10/22.
//
#include "StoppedState.h"

StoppedState::StoppedState() : MusicPlayerState(std::string("Stopped")) {}

StoppedState::~StoppedState() {
}

void StoppedState::Play(MusicPlayer *player) {
    player->setState(MusicPlayer::ST_PLAYING);
}