//
// Created by Zubin Singh on 14/10/22.
//
#include "MusicPlayer.h"
#include "StoppedState.h"
#include "iostream"
#include "PausedState.h"
#include "PlayingState.h"

MusicPlayer::MusicPlayer()
        : m_pState(new StoppedState()){
}

MusicPlayer::~MusicPlayer() {
    delete m_pState;
}

void MusicPlayer::Play() {
    m_pState->Play(this);
}

void MusicPlayer::Pause() {
    m_pState->Pause(this);
}

void MusicPlayer::Stop() {
    m_pState->Stop(this);
}

void MusicPlayer::setState(State state) {
    std::cout << "changing from " << m_pState->GetName() << " to ";
    delete m_pState;

    if(state == ST_STOPPED)
    {
        m_pState = new StoppedState();
    }

    else if(state == ST_PLAYING)
    {
        m_pState = new PlayingState();
    }
    else
    {
        m_pState = new PausedState();
    }

    std::cout << m_pState->GetName() << " state\n";
}
