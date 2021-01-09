#include "DoubleList.h"
#include <iostream>
using std::cout;
using std::to_string;

int main(){
  DoubleList numbers1;
  DoubleList numbers3;

  cout << "Adding to numbers1:\n";
  numbers1.addDouble(1.1);
  numbers1.addDouble(2.2);
  numbers1.addDouble(3.3);
  numbers1.addDouble(4.4);
  numbers1.addDouble(5.5);
  numbers1.addDouble(6.6);
  numbers1.addDouble(7.7);
  numbers1.addDouble(8.8);
  numbers1.addDouble(9.9);
  numbers1.addDouble(10.10);
  DoubleList numbers2(numbers1);
  numbers1.addDouble(11.11);
  cout << numbers1.toString() << '\n';

  cout << "Removing from numbers1:\n";
  numbers1.removeDouble();
  cout << numbers1.toString() << '\n';
  numbers1.removeDouble();
  cout << numbers1.toString() << '\n';

  cout << "---------------------------------------------------------------------------------------------\n\n";
  numbers3 = numbers2;
  cout << "Start numbers2 (size of " + to_string(numbers2.getNumDoubles()) + "):\n";
  cout << numbers2.toString() << '\n';
  cout << "Start numbers3 (size of " + to_string(numbers3.getNumDoubles()) + "):\n";
  cout << numbers3.toString() << '\n';

  numbers2.removeDouble();
  numbers2.removeDouble();
  numbers3.removeDouble();
  numbers2.addDouble(7.7);
  numbers2.addDouble(8.8);
  numbers3.addDouble(9.9);
  numbers3.addDouble(10.10);
  cout << "End numbers2 (size of " + to_string(numbers2.getNumDoubles()) + "):\n";
  cout << numbers2.toString() << '\n';
  cout << "End numbers3 (size of " + to_string(numbers3.getNumDoubles()) + "):\n";
  cout << numbers3.toString() << '\n';

  cout << "---------------------------------------------------------------------------------------------\n\n";
  cout << "The value at index 9 is:\n";
  cout << "numbers1 is " + to_string(numbers1.getDouble(9)) + "\n";
  cout << "numbers2 is " + to_string(numbers2.getDouble(9)) + "\n";
  cout << "numbers3 is " + to_string(numbers3.getDouble(9)) + "\n\n";
}
