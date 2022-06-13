#pragma once
#include "nod.h"
#include <vector>
using namespace std;

template<typename T>
class Set {
private: 
	Node<T>* head;
public:
	Set():head(nullptr){}
	Set(Node<T> val_head);
	void addNode(Node<T> val_node);
	void deleteNode(Node<T> val_node);
	T getPozNode(int poz);
	int size();
	bool ifExista(Node<T>* val_node);

	~Set() = default;
};

template<typename T> 
inline Set<T>::Set(Node<T> val_head)
{
	head = new Node<T>(val_head);
}

template<typename T>
inline void Set<T>::addNode(Node<T> val_node)
{
	Node<T>* node = new Node<T>(val_node);
	node->next = nullptr;
	if (head == nullptr)
		head = node;
	else
	{
		Node <T>* temp = head;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = node;
	}
}

template<typename T>
inline void Set<T>::deleteNode(Node<T> val_node)
{
	if (head != nullptr)
	{
		Node<T>* temp = head;
		Node<T>* prev = nullptr;
		while (temp != nullptr)
		{
			if (temp->info == val_node.info)
			{
				if (prev == nullptr)
					head = temp->next;
				else
					prev->next = temp->next;

				delete temp;
				break;
			}
			prev = temp;
			temp = temp->next;
		}
	}
}

/*template<typename T>
inline void Set<T>::deleteNode(Node<T> val_node)
{
	if (head == nullptr)
		return;
	Node<T>* temp = head;
	while (temp->next && (temp->next.getInfo() != val_node.getInfo()))
		temp = temp->next;
	if (temp->next)
		temp->next = temp->next->next;
}*/

template<typename T>
inline T Set<T>::getPozNode(int poz)
{
	if (head != nullptr)
	{
		Node<T>* temp = head;
		int i = 0;
		while (temp != __nullptr)
		{
			if (i == poz)
				return temp->info;
			i++;
			temp = temp->next;
		}
	}
}

template<typename T>
inline int Set<T>::size()
{
	if (head != nullptr)
	{
		Node<T>* temp = head;
		int i = 0;
		while (temp != __nullptr)
		{
			i++;
			temp = temp->next;
		}
		return i;
	}
	return -1;
}

template<typename T>
inline bool Set<T>::ifExista(Node<T>* val_node)
{
	Node<T>* temp = head;
	while (temp)
	{
		if (temp->getInfo() == val_node->getInfo())
			return true;
		return false;
	}
}