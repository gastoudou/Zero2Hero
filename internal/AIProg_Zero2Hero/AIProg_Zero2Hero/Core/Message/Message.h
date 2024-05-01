#pragma once

class IListener;

struct Message
{
	size_t id = 0u;
	IListener* source;
	IListener* destination;
	std::string text;
};