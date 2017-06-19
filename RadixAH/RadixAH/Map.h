#pragma once
#include <iostream>
#include "DynamicArray.h"
using namespace std;

template <class T>
class Map
{
public:
	void Size()
	{
		stack.size();
	}

	bool IsItem(string name)
	{
		for (int i = 0; i<Size(); i++)
		{
			if (stack[i].name == name)
				return true;
		}
		return false;
	}

	bool AddItem(string name, T data)
	{
		if (IsItem(name))
			return false;
		Data d;
		d.name = name;
		d.data = data;
		stack.push_back(d);
		return true;
	}

	T& operator [] (string name)
	{
		for (int i = 0; i<Size(); i++)
		{
			if (stack[i].name == name)
				return stack[i].data;
		}
		long idx = Size();
		Data d;
		d.name = name;
		stack.push_back(d);
		return stack[idx].data;
	}

	string GetItemName(long index)
	{
		if (index<0)
			index = 0;
		for (int i = 0; i<Size(); i++)
			if (i == index)
				return stack[i].name;
		return "";
	}

	T& operator [] (long index)
	{
		if (index < 0)
			index = 0;
		for (int i = 0; i<Size(); i++)
		{
			if (i == index)
				return stack[i].data;
		}
		return stack[0].data;
	}
private:

	T data;
	string name;
	DynamicArray<Data> stack;
};
