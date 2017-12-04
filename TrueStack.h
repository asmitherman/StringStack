#ifndef _TRUESTACK_
#define _TRUESTACK_
#include <string>
#include <stack>
using namespace std;

class TrueStack
{
  private:
    stack<string> quiz;
  public:
    virtual std::string pop() = 0;
    virtual void push(std::string) = 0;
    virtual bool isEmpty() = 0;
};

#endif
