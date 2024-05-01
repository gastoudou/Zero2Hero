#pragma once
template< class T>
class Singleton
{
public:
	static T& GetInstance()
	{
		static T s_instance;
		return s_instance;
	}
};