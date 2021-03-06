#pragma once
#include "DynamicArray.h"


template <typename T>
class GraphNode
{
public:
	GraphNode()
	{

	}
	GraphNode(T data)
	{
		m_Data = data;
	}
	~GraphNode()
	{

	}
	void AddConnection(GraphNode<T>* other)
	{
		for (int i = 0; i < m_Edges.Size(); ++i)
		{
			if (m_Edges[i] == other)
			{
				m.Edges.Remove(i);
				return;
			}
		}
	}


private:
	DynamicArray<GraphNode<T>*> m_Edges;
	T m_Data;
};

