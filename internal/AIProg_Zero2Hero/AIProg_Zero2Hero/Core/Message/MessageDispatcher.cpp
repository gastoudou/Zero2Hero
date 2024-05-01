#include "stdafx.h"
#include "Core/Message/MessageDispatcher.h"

#include "Core/Message/Message.h"
#include "Message/Listener.h"

void MessageDispatcher::Dispatch( Message* _message )
{
	m_messages.emplace_back( _message );
}

void MessageDispatcher::Update( const float /*_dt*/ )
{
	for ( auto message : m_messages )
	{
		message->destination->HandleMessage( message );
	}
	m_messages.clear();
}

void MessageDispatcher::Register( IListener* _listener )
{
	const auto itSearch = std::find( m_listeners.cbegin(), m_listeners.cend(), _listener );
	if ( itSearch == m_listeners.cend() )
	{
		m_listeners.emplace_back( _listener );
	}
}

void MessageDispatcher::Unregister( IListener* _listener )
{
	const auto itSearch = std::find( m_listeners.cbegin(), m_listeners.cend(), _listener );
	if ( itSearch != m_listeners.cend() )
	{
		m_listeners.erase( itSearch );
	}
}