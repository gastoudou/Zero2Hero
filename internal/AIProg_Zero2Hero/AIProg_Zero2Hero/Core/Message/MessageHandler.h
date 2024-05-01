#pragma once

struct Message;

class IMessageHandler
{
public:
	virtual void HandleMessage( Message* _message ) = 0;
};