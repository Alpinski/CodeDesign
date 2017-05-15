#pragma once
#include <string>


template<typename T>
class DynamicArray
{
public:
	DynamicArray() 
	{	};
	~DynamicArray() 
	{
		delete[] data;
	};


	DynamicArray::DynamicArray(const DynamicArray& other)
	{
		data = new T[other.m_capacity];
		m_capacity = other.m_capacity;
		memcpy(data, other.data, sizeof(T) * m_capacity);
	}

	DynamicArray DynamicArray::operator=(const DynamicArray& other)
	{
		if (this == &other) return *this;
		delete[] data;
		data = new T[other.m_capacity];
		m_capacity = other.m_capacity;
		memcpy(data, other.data, sizeof(T) * m_capacity);
		return *this;
	}

	void DynamicArray::CreateArray(T size)
	{
		data = new T[size];
		m_capacity = size;
		m_used = 0;
	}

	void DynamicArray::addToArrayEnd(T nElement)
	{
		if (m_used == m_capacity)
		{
			DynamicArray* nData = new T[m_capacity * 2];
			memcpy(data, other.data, sizeof(T) * m_capacity);
			delete data;
			data = nData;
			m_capacity* = 2
		}
		data[m_used] = nElement;
		used += 1;
	}

	void DynamicArray::addToArrayMid(T nElement)
	{
		if (m_used == m_capacity)
		{
			nData = new T[m_capacity * 2];
			T(nData, data);
			delete data;
			data = nData;
			m_capacity* = 2
		}
		data[m_used] = nElement;
		used += 1;
	}

	void DynamicArray::removeFromArrayEnd(T remElement)
	{
		if (m_used < m_capacity)
		{
			DynamicArray* nData = new T[m_capacity - 1];
			memcpy(data, other.data, sizeof(T) * m_capacity);
			delete data;
			data = nData;
			m_capacity -= 1
		}
		used -= 1;
	}

	T* data;
	//DynamicArray* nData
	//DynamicArray* data;
	int m_capacity;
	int m_used;
	int m_length;
};

