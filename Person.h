#pragma once
#include<iostream>
using namespace std;

class Person
{
private:
	char* m_name;
	double m_height;

public:
	Person() = default;
	Person(const char* name, const double height);
	inline virtual ~Person()
	{
		if (m_name)
		{
			delete m_name;
		}
	}

	char* GetName()const
	{
		return m_name;
	}

	void Print()const
	{
		cout << "Name : " << m_name << endl;
		cout << "Height : " << m_height << endl;
	}
	double GetHeight()const
	{
		return m_height;
	}
};
