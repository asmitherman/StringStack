#ifndef _STRINGSTACK_ 
#define _STRINGSTACK_
#include <string>
#include "TrueStack.h"
#include <stack>
using namespace std;

class StringStack : public TrueStack
{
  private:
    stack<string> quiz;
  public:
    
    std::string pop() {
      string answer = quiz.top();
      quiz.pop();
      return answer;
    }
    void push(std::string str){
      quiz.push(str);
    }
    bool isEmpty() {
      if(quiz.empty()) {
        return true;
      }
      else {
        return false;
      }
    }
};

#endif
