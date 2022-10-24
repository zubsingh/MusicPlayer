//
// Created by Zubin Singh on 11/10/22.
//
#include "MusicPlayerState.h"
#include "iostream"

MusicPlayerState::MusicPlayerState(std::string name) : m_name(name){}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::Play(MusicPlayer *)
{
    std::cout << "Illegal state transition from " << GetName() << " to Playing\n";
}

void MusicPlayerState::Pause(MusicPlayer *)
{
    std::cout << "Illegal state transition from " << GetName() << " to Paused\n";
}

void MusicPlayerState::Stop(MusicPlayer *)
{
    std::cout << "Illegal state transition from " << GetName() << " to Stopped\n";
}