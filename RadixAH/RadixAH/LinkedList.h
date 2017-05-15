#pragma once
#include "ListNode.h"

template<typename T>
class LinkedList
{
public:
	LinkedList() {};
	~LinkedList() {};

	void pushBack(T data)
	{}

	ListNode<T>* start;
	ListNode<T> end;
};

