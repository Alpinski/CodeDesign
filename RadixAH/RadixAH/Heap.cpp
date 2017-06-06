#include "Heap.h"
#include "DynamicArray.h"
#include <cmath>

Heap::Heap()
{
}

Heap::~Heap()
{
}

int Heap::Peek()
{
	int nTop = m_pValueArray.Size() - 1;
	return m_pValueArray[nTop];
}

void Heap::Pop()
{
	m_pValueArray.popBack();
}

void Heap::Clear()
{
	m_pValueArray = 0;
}

void Heap::Push(int value)
{
	int index = GetSize();
	m_pValueArray.pushBack(value);
	int parent = floor((index - 1) / 2);
	while (m_pValueArray[index] > m_pValueArray[parent])
	{
		int temp;
		temp = m_pValueArray[index];
		m_pValueArray[index] = m_pValueArray[parent];
		m_pValueArray[parent] = temp;
		index = parent;
		parent = floor((index - 1) / 2);
	}
}

void Heap::Remove(int value)
{
	m_pValueArray.remove(value);
}

int Heap::GetSize()
{
	return m_pValueArray.Size();
}

int Heap::GetMaxSize()
{
	return m_pValueArray.Capacity();
}

void Heap::SetMaxSize(int minSize)
{
	m_pValueArray.Capacity() == minSize;
}

bool Heap::IsEmpty()
{
	return(m_pValueArray.Size() == 0);
}
