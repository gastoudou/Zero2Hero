#include "stdafx.h"
#include "Agent.h"

Agent::Agent() = default;
Agent::~Agent() = default;

void Agent::Init()
{

}

void Agent::Update( const float _dt )
{
	std::cout << "Je parle (" << _dt << ")" << std::endl;
}

void Agent::Shutdown()
{

}