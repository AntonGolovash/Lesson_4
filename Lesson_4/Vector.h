#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

template<typename T>

class Vector
{
public:
	Vector();
	Vector(const Vector& otherVector);
	Vector(Vector&& other);// rvalue
	~Vector();
	Vector<T>& operator= (const Vector& rightVector);
	Vector<T>& operator= (Vector&& other);
	void pop_back();
	void push_back(T item);
	friend ostream& operator<< (ostream& out, const Vector<T>& data);
	int size();
private:
	T* _data;
	int _size;
};