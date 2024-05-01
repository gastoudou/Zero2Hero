#pragma once

#include "AI/State/State.h"

class Idle final : public IState
{
public:
	Idle( Agent* _owner );
	~Idle();

	void Enter() override;
	void Update( const float _dt ) override;
	void Exit() override;
};