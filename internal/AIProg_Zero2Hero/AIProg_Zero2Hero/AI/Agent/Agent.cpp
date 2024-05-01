#include "stdafx.h"
#include "Agent.h"

#include "AI/State/AgentState/Idle.h"
#include "AI/State/AgentState/Talking.h"
#include "AI/State/StateMachine.h"
#include "Message/Message.h"
#include "Message/MessageDispatcher.h"

Agent::Agent()
	: m_stateMachine( std::make_unique<StateMachine>() )
{
	m_stateMachine->ChangeState( std::make_shared<Idle>( this ) );
}

Agent::~Agent() = default;

void Agent::Init()
{
	MessageDispatcher::GetInstance().Register( this );
}

void Agent::Update( const float _dt )
{
	m_stateMachine->Update( _dt );
}

void Agent::Shutdown()
{
	MessageDispatcher::GetInstance().Unregister( this );
}

void Agent::HandleMessage( Message* _message )
{
	if ( _message->text == "Parle" )
	{
		m_stateMachine->ChangeState( std::make_shared<Talking>( this ) );
	}
}

void Agent::ChangeState( std::shared_ptr<IState> _newState )
{
	m_stateMachine->ChangeState( _newState );
}