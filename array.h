/*
 * array.h
 *
 *  Created on: Apr 8, 2018
 *      Author: muzamil
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include <iostream>
using namespace std;
class Array {
private:
	int *arr;
	int siz;
public:
	Array();
	Array(int size);
	Array(int *arr, int size);
	Array(const Array &);
	int* getArr() const;
	void setArr(int* arr);
	int getSiz() const;
	void setSiz(int siz);
	int& operator[](int i);
	int& operator[](int i) const;
	const Array & operator=(const Array&);
	Array operator+(const Array&);
	Array operator-(const Array&);
	Array operator++();
	Array operator++(int);
	Array& operator--(int);
	bool operator==(const Array&) const;
	bool operator!();
	void operator+=(const Array&);
	void operator-=(const Array&);
	int operator()(int idx, int val);
	~Array();

};
ostream& operator<<(ostream& input, const Array&);
istream& operator>>(istream& ouput, Array&);
#endif /* ARRAY_H_ */
