#pragma once
#include "DynamicArray.h";

template<typename T>
class Stack
{
public:
	Stack(T Capacity)
	{
		m_pData = new T[Capacity];

	}
	~Stack()
	{
		delete[] m_pData;
	}


private:
	int m_nCapacity;
	int m_nUsed;
};

