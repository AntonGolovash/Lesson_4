#include "Vector.h"

template<typename T>
Vector<T>::Vector() : _data(nullptr), _size(0)
{
	 cout << "Constructor default\t" << this << endl;
}

template<typename T>
 Vector<T>::Vector(const Vector& otherVector)// конструктор копирования
{
	 cout << "Constructor copy:\t" << this << endl;

	 _size = otherVector._size;
	 _data = new T[_size];

	 for (size_t i = 0; i < _size; i++)
	 {
		 _data[i] = otherVector._data[i];
	 }
}

template<typename T>
 Vector<T>::Vector(Vector&& other) : _data(nullptr), _size(0)// конструктор перемещения
{
	 _data = other._data;
	 _size = other._size;

	 other._data = nullptr;
	 other._size = 0;

	 cout << "Constructor movement:\t" << this << endl;

 }

template<typename T>
 Vector<T>::~Vector()
{
	 if (_data != nullptr)
	 {
		 cout << "Destructor:\t" << endl;
		 delete[] _data;
	 }
}

 // оператор копирования
template<typename T>
 Vector<T>& Vector<T>::operator=(const Vector& rightVector)
{
	 if (this == &rightVector)
		 return *this;

	 cout << "operator= copy:\t" << this << endl;

	 _size = rightVector._size;
	 _data = new T[_size];

	 for (size_t i = 0; i < _size; i++)
	 {
		 _data[i] = rightVector._data[i];
	 }

	 return *this;
 }

// оператор перемещения
template<typename T>
 Vector<T>& Vector<T>::operator=(Vector&& other)
{
	 cout << "operator= assignment:\t" << this << endl;
	 delete[] _data;

	 _data = other._data;
	 _size = other._size;

	 other._data = nullptr;
	 other._size = 0;

	 return *this;
}

template<typename T>
 void Vector<T>::pop_back()
{

}

template<typename T>
 void Vector<T>::push_back(T item)
{
}

template<typename T>
 int Vector<T>::size()
{
	return 0;
}

 template<typename T>
ostream& operator<< (ostream& out, const Vector<T>& data)
{
	// TODO: вставьте здесь оператор return
}
