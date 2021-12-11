#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
#include "Vector.h"
#include "Vector.cpp"
using namespace std;


template<typename T>
int GetVectorSize(T& collection)
{
	return collection.size();
}
int main()
{
	Vector<int> vector;
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);

	cout << vector << endl;
	Vector<int> vector2 = { move(vector) };
	cout << vector2 << endl;
	cout << vector << endl;
	vector = move(vector2);
	vector.pop_back();
	vector.pop_back();
	cout << vector << endl;
	vector.push_back(15);
	cout << vector << endl;

}

