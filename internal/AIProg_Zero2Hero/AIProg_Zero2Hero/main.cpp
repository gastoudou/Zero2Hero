#include "stdafx.h"

#include "AI\Agent\Agent.h"

#include "Message\Message.h"
#include "Message\MessageDispatcher.h"

int main()
{
	{
		Agent a;

		for ( size_t i = 0u; i < 5u; ++i )
		{
			a.Update( 0.033f );
			MessageDispatcher::GetInstance().Update( 0.033f );
		}

		Message message;
		message.text = "Parle";
		message.destination = &a;

		MessageDispatcher::GetInstance().Dispatch( &message );

		for ( size_t i = 0u; i < 5u; ++i )
		{
			a.Update( 0.033f );
			MessageDispatcher::GetInstance().Update( 0.033f );
		}
	}

	system( "pause" );
	return 0;
}