#include "stdafx.h"
#include "AI/State/StateMachine.h"

#include "AI/State/State.h"
#include "Core/Message/MessageHandler.h"

StateMachine::StateMachine()
{
	Init();
}

StateMachine::~StateMachine()
{
	Shutdown();
}

void StateMachine::Init()
{

}

void StateMachine::Update( const float _dt )
{
	if ( m_currentState )
	{
		m_currentState->Update( _dt );
	}
}

void StateMachine::Shutdown()
{
	if ( m_currentState )
	{
		m_currentState->Exit();
	}
}

void StateMachine::ChangeState( std::shared_ptr<IState> _newState )
{
	if ( m_currentState )
	{
		m_currentState->Exit();
	}

	m_currentState = _newState;

	if ( m_currentState )
	{
		m_currentState->Enter();
	}
}