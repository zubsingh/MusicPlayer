//
// Created by Zubin Singh on 14/10/22.
//
#include "PausedState.h"
#include "MusicPlayer.h"

PausedState::PausedState()
        : MusicPlayerState(std::string("Paused")) {
}

PausedState::~PausedState() {
}

void PausedState::Play(MusicPlayer *state) {
    state->setState(MusicPlayer::ST_PLAYING);
}

void PausedState::Stop(MusicPlayer *state) {
    state->setState(MusicPlayer::ST_PAUSED);
}