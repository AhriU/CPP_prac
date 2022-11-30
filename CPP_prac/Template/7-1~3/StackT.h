#pragma once

#include <iostream>
using namespace std;

template< typename T>
class Stack {
	T* Buf;
	int Top;
	int Size;
public:
	Stack(int s);
	virtual ~Stack();
	bool Full() const;
	bool Empty() const;
	void Push(const T& a);
	void Push(T&& a);
	T&& Pop();
};

template <typename T> Stack<T>::Stack(int s) : Top(s),Size(s){
	Buf = new T[s];
}

template <typename T> Stack<T>::~Stack() {
	delete[] Buf;
}

template <typename T> bool Stack<T>::Full() const {
	return !Top;
}

template <typename T> bool Stack<T>::Empty() const {
	return Top == Size;
}

template <typename T> void Stack<T>::Push(const T& a) {
	Buf[--Top] = a;
}

template <typename T> void Stack<T>::Push(T&& a) {
	Buf[--Top] = move(a);
}

template <typename T> T&& Stack<T>::Pop() {
	return move(Buf[Top++]);
}