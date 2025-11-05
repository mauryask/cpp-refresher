#include <iostream>
using namespace std;
// fucntion prototype (aka function declaration)
void call_me2();
int fun(int, int); // fucntion declaration with arguments and return type

void call_me()
{
    cout << "You called me!!" << endl;
}

int main()
{
    call_me();
    call_me2(); // error: ‘call_me2’ was not declared in this scope;
    // sicne the function is being called before definition it self
    // to solve this problem you need to declare the prototype of the function
    return 0;
}

void call_me2()
{
    cout << "You called me2!!" << endl;
}

int fun(int a, int b)
{
    return a + b;
}