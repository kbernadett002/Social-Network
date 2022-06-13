#pragma once

template<typename T>
class Set;

template<class T>
class Node {
private:
	T info; 
	Node<T>* next;
public:
	Node(T info, Node<T>*next):info(info), next(next){}
	Node(T info) :info(info) { next = nullptr;}
	friend class Set<T>;

	T getInfo()const { return info; }
};