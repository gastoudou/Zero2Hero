#include "stdafx.h"
#include "AI/State/AgentState/Talking.h"

#include "AI/Agent/Agent.h"
#include "AI/State/AgentState/Idle.h"
#include "Core/Message/Message.h"

Talking::Talking( Agent* _owner )
	: IState( _owner )
{

}

Talking::~Talking() = default;

void Talking::Enter()
{
	std::cout << "Je rentre dans Talking" << std::endl;
}

void Talking::Update( const float /*_dt*/ )
{
	std::cout << "Je parle" << std::endl;
	m_owner->ChangeState( std::make_shared<Idle>( m_owner ) );
}

void Talking::Exit()
{
	std::cout << "Je sors de Talking" << std::endl;
}