/*
 * array.cpp
 *
 *  Created on: Apr 8, 2018
 *      Author: muzamil
 */

#include "array.h"

Array::Array() {
	arr = NULL;
	siz = 0;
}
Array::Array(int size) {
	siz = size;
	arr = new int[size];
}
Array::Array(int *arr, int size) {
	siz = size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = arr[i];
	}
}
Array::Array(const Array &arrC) {
	this->siz = arrC.siz;
	this->arr = new int[siz];
	for (int i = 0; i < arrC.siz; i++) {
		this->arr[i] = arrC.arr[i];
	}
}
int* Array::getArr() const {
	return arr;
}

void Array::setArr(int* arr) {
	this->arr = arr;
}

int Array::getSiz() const {
	return siz;
}

void Array::setSiz(int siz) {
	this->siz = siz;
}
int& Array::operator[](int i) {
	if (i >= 0 && i < this->siz) {
		return arr[i];
	}

}
int& Array::operator[](int i) const {
	if (i >= 0 && i < this->siz) {
		return arr[i];
	}
}
const Array & Array::operator=(const Array& obj) {
	if (this == &obj) {
		return *this;
	}
	delete[] this->arr;

	this->siz = obj.siz;
	this->arr = new int[siz];

	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = obj.arr[i];
	}
	return *this;

}
Array Array::operator+(const Array& obj) {
	Array res(this->siz);
	for (int i = 0; i < this->siz; i++) {
		res.arr[i] = this->arr[i] + obj.arr[i];
	}
	return res;
}
Array Array::operator-(const Array& obj) {
	Array res(this->siz);
	for (int i = 0; i < this->siz; i++) {
		res.arr[i] = this->arr[i] - obj.arr[i];
	}
	return res;
}
Array Array::operator++() {
	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = this->arr[i] + 1;
	}
	return *this;
}
Array Array::operator++(int) {
	Array res(*this);
	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = this->arr[i] + 1;
	}
	return res;
}
Array& Array::operator--(int) {
	Array res(*this);
	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = this->arr[i] - 1;
	}
	return res;
}
bool Array::operator==(const Array& obj) const {
	if (this->siz != obj.siz) {
		return false;
	}
	for (int i = 0; i < this->siz; i++) {
		if (this->arr[i] != obj.arr[i]) {
			return false;
		}
	}
	return true;
}
bool Array::operator!() {
	for (int i = 0; i < this->siz; i++) {
		if (this->arr[i] != 0) {
			return false;
		}
	}
	return true;
}
void Array::operator+=(const Array& obj) {
	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = this->arr[i] + obj.arr[i];
	}
}
void Array::operator-=(const Array& obj) {
	for (int i = 0; i < this->siz; i++) {
		this->arr[i] = this->arr[i] - obj.arr[i];
	}
}
int Array::operator()(int idx, int val)
{
	if (this->arr[idx]!=val)
		return -1;

	int *temp=new int [this->siz];
	for (int i=0;i<this->siz;i++)
	{
		temp[i]=this->arr[i];
	}

	delete []this->arr;

	this->siz=siz-1;
	this->arr=new int [this->siz];

	for (int i=0;i<this->siz+1;i++)
	{
		if (i<idx)
		{
			this->arr[i]=temp[i];
		}
		else
		{
			this->arr[i]=temp[i+1];
		}
	}

	return 1;

}

Array::~Array() {
	delete []this->arr;
}
ostream& operator<<(ostream& input, const Array& obj)
{
	for (int i=0;i<obj.getSiz();i++)
	{
		input<<obj.getArr()[i]<<" ";
	}
	return input;
}
istream& operator>>(istream& ouput, Array& obj)
{
	for (int i=0;i<obj.getSiz();i++)
	{
		cout<<"Enter value "<<i+1;
		ouput>>obj.getArr()[i];
	}
	return ouput;
}

