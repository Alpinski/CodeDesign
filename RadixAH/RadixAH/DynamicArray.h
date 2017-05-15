#pragma once
#include <string>


template<typename T>
class DynamicArray
{
public:
	DynamicArray( T size) 
	{
		data = new DynamicArray[size];
		m_capacity = size;
		m_used = 0;
	};
	~DynamicArray() 
	{
		delete[] DynamicArray;
	};


	DynamicArray::DynamicArray(const DynamicArray& other)
	{
		data = new DynamicArray[other.m_capacity];
		m_capacity = other.m_capacity;
		memcpy(data, other.data, sizeof(T) * m_capacity);
	}

	DynamicArray DynamicArray::operator=(const DynamicArray& other)
	{
		if (this == &other) return *this;
		delete[] data;
		data = new DynamicArray[other.m_capacity];
		m_capacity = other.m_capacity;
		memcpy(data, other.data, sizeof(T) * m_capacity);
		return *this;
	}

	void DynamicArray::addToArrayEnd(T nElement)
	{
		DynamicArray* m_Copy;
		DynamicArray* nData;
		if (m_used == m_capacity)
		{
			nData = new DynamicArray[m_capacity * 2];
			(nData, data);
		}
	}

	T data;
	DynamicArray* data;
	int m_capacity;
	int m_used;
	int m_length;
};

