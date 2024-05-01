#pragma once

class Agent;

class IState
{
public:
	IState() = delete;
	IState( Agent* _owner ) : m_owner( _owner )
	{}
	virtual ~IState() = default;

	virtual void Enter() = 0;
	virtual void Update( const float _dt ) = 0;
	virtual void Exit() = 0;

protected:
	Agent* m_owner = nullptr;
};