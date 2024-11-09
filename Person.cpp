#include "Person.h"
#include<cstring>

//constructor defination outside of the class
Person::Person(const char* name, const double height) : m_height{ height }
{
	size_t length = strlen(name);
	
	//allocate memory
	m_name = new char[length + 1];

	//copy data
	strcpy_s(m_name, length+1, name);
}
