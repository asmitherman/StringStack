#include<iostream>
#include<string>
#include "stringstack.h"

int main() {
  StringStack test;
  test.push("this is a test");
  test.push("another test");
  cout << test.pop() << endl;
  cout << test.pop() << endl;
  if(!test.isEmpty()) {
    cout << "this is not empty" << endl;
  } else {
    cout << "this is empty" << endl;
  }
  return 0;
}
