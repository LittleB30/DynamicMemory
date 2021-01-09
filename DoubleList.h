#ifndef _DoubleList_Header_
#define _DoubleList_Header_
#include <iostream>
using std::string;

class DoubleList{
  private:
    int capacity = 10;
    int size = 0;
    double* list = new double[capacity];
    void reallocate(int code);
    void clear();
    void copy(const DoubleList& doubles);
  public:
    DoubleList();
    ~DoubleList();
    DoubleList(const DoubleList& doubles);
    DoubleList(DoubleList&& doubles) = delete;
    DoubleList& operator=(const DoubleList& doubles);
    DoubleList& operator=(DoubleList&& doubles) = delete;
    void addDouble(double num);
    bool removeDouble();
    double getDouble(int index);
    int getNumDoubles();
    string toString();
};

#endif
