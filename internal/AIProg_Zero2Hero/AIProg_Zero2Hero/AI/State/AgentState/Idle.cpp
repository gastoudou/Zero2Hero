#include "stdafx.h"
#include "Idle.h"

Idle::Idle( Agent* _owner )
	: IState( _owner )
{

}

Idle::~Idle() = default;

void Idle::Enter()
{
	std::cout << "Je rentre en Idle" << std::endl;
}

void Idle::Update( const float /*_dt*/ )
{
	std::cout << "...Idle..." << std::endl;
}

void Idle::Exit()
{
	std::cout << "Je sors de Idle" << std::endl;
}