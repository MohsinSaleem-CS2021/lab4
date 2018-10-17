#include<iostream>
#include<array>
#include<string>
using namespace std;
class Stack{
public:

  bool empty()
  {
    if(tos==10)
      return false;

    else if(tos==0)
      return true;
  }

  void push(string item)
  {
    if(tos>0)
    {
        tos--;
        stack[tos]=item;
        //showStack();
    }
    else
        cout<<"full!!!!!!!!  Cannot add"<<endl;

    for(int i=tos ; i<=9 ; i++)
      std::cout << stack[i] << '\n';
  }

  string top()
  {
    if(tos>0)
      std::cout << stack[tos] << '\n';
      //return stack[tos];

    else
      std::cout << stack[0] << '\n';
      //return stack[0];
  }

  void pop()
  {
    if(tos>9)
        cout<<"Cannot remove..."<<endl;
    else
    {
        tos++;
        //showStack();
    }/* message */

    for(int i=tos ; i<=9 ; i++)
      std::cout << stack[i] << '\n';
  }

private:
  array<string , 10>stack;
  int tos=10;
};


int main() {

  Stack s;
  char choice;
  while(true)
  {
    std::cout << "/***********************/" << '\n';
    std::cout << "/***********************/" << '\n';
    std::cout << "/***********************/" << '\n';
    std::cout << endl;
    std::cout << endl;

    std::cout << "press a for add" << '\n';
    std::cout << "press r for remove" << '\n';
    std::cout << "press t for showing recently added item" << '\n';
    std::cout << "press c for checking whether stack empty or not" << '\n';

    std::cout << "/***********************/" << '\n';
    std::cout << "/***********************/" << '\n';
    std::cout << "/***********************/" << '\n';
    std::cout << endl;
    std::cout << endl;

    std::cout << "enter choice: ";std::cin >> choice;

    if(choice=='a')
    {
      string item;
      std::cout << "enter item to add : ";std::cin >> item;
      s.push(item);
    }

    else if(choice=='r')
    {
      s.pop();
    }

    else if(choice=='t')
    {
      s.top();
    }

    else if(choice=='c')
    {
      //s.empty();
      if(s.empty()==true)
        std::cout << "not empty" << '\n';

      else if(s.empty()==false)
        std::cout << "empty" << '\n';
    }

    else
      std::cout << "press valid key" << '\n';
  }
  return 0;
}
