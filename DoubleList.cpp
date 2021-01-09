#include "DoubleList.h"
#include <iostream>
using std::string;
using std::to_string;
using std::cout;

DoubleList::DoubleList(){}

DoubleList::DoubleList(const DoubleList& doubles){
  copy(doubles);
}

DoubleList::~DoubleList(){
  cout << "Destructing\n";
  clear();
}

DoubleList& DoubleList::operator=(const DoubleList& doubles){
  if (this != &doubles) {
    clear();
    copy(doubles);
  }
  return *this;
}

void DoubleList::addDouble(double num){
  if (size == capacity) {
    reallocate(0);
  }
  list[size++] = num;
}

bool DoubleList::removeDouble(){
  if (size == 0){
    return false;
  } else {
    list[--size] = 0.0;
    if (size == (capacity - 10)){
      reallocate(1);
    }
    return true;
  }
}

double DoubleList::getDouble(int index){
  if (index < size && index >= 0) {
    return list[index];
  }
  return 0.0;
}

int DoubleList::getNumDoubles(){
  return size;
}

string DoubleList::toString(){
  string temp = "[";
  for (int i = 0; i < capacity; i++) {
    temp += to_string(list[i]);
    temp += ",";
    if ((i + 1) % 10 == 0 && i != 0 && i != capacity - 1) {
      temp += "\n";
    }
    temp += " ";
  }
  temp += "\b\b]\n";
  return temp;
}

void DoubleList::reallocate(int code){
  double* temp;
  switch (code) {
    case 0:
      capacity += 10;
      break;
    case 1:
      capacity -= 10;
  }
  temp = new double[capacity];

  for (int k = 0; k < size; k++) {
    temp[k] = list[k];
  }
  delete[] list;
  list = temp;
}

void DoubleList::clear(){
  delete[] list;
}

void DoubleList::copy(const DoubleList& doubles){
  capacity = doubles.capacity;
  size = doubles.size;
  double* temp = new double[capacity];
  for (int k = 0; k < size; k++) {
    temp[k] = doubles.list[k];
  }
  list = temp;
}
