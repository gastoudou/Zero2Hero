#pragma once

class IState;
struct Message;

class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	void Init();
	void Update( const float _dt );
	void Shutdown();

	void ChangeState( std::shared_ptr<IState> _newState );

private:
	std::shared_ptr<IState> m_currentState;
};