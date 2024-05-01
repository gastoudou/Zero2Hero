#pragma once
#include "Singleton.h"

class IListener;
struct Message;

class MessageDispatcher : public Singleton<MessageDispatcher>
{
public:
	void Dispatch( Message* _message );
	void Update( const float _dt );

	void Register( IListener* _listener );
	void Unregister( IListener* _listener );

private:
	std::vector<IListener*> m_listeners;
	std::vector<Message*> m_messages;
};