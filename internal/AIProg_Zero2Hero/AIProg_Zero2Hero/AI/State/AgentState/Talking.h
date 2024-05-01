#pragma once

#include "AI/State/State.h"
#include "Core/Message/MessageHandler.h"

class Talking final : public IState
{
public:
	Talking( Agent* _owner );
	~Talking();

	void Enter() override;
	void Update( const float _dt ) override;
	void Exit() override;
};