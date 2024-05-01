#pragma once

#include "Core/Message/Listener.h"

class IState;
class StateMachine;

class Agent : public IListener
{
public:
	Agent();
	virtual ~Agent();

	void Init();
	void Update( const float _dt );
	void Shutdown();

	void HandleMessage( Message* _message );

	void ChangeState( std::shared_ptr<IState> _newState );

private:
	std::unique_ptr<StateMachine> m_stateMachine = nullptr;
};