#pragma once

class Agent
{
public:
	Agent();
	~Agent();

	void Init();
	void Update( const float _dt );
	void Shutdown();
};
