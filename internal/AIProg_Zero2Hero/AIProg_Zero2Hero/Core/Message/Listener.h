#pragma once

struct Message;

class IListener
{
public:
	virtual void HandleMessage( Message* _message ) = 0;
};