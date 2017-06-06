#pragma once
#include "LinkedList.h"

template <typename T>
class Queue
{
public:
	Queue(int initialSize = 0)
	{
		m_pQue = new LinkedList<T>[initialSize];
	}
	~Queue()
	{
		delete m_pQue;
	}

	bool IsEmpty()
	{
		return(m_pQue->Size() == 0);
	}

	int Size()
	{
		return m_pQue->Size();
	}

	void Push(T value)
	{
		m_pQue->PushBack(value);
	}

	T Top()
	{
		m_pQue->End();
	}

	T popFront()
	{
		m_pQue->popFront();
	}

	T Empty()
	{
		m_pQue->Empty();
	}

	LinkedList<T>* m_pQue;
};

