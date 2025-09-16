#include <iostream>
using namespace std;

int main()
{
    int pass_total = 0;
    int fail_total = 0;
  
    while(true){
        int marks;
        cin >> marks;
       
        if(marks == -1) break;
        // Ternary operatior as Lvalue (Only valid in C++)
        // Dyncamically selects the variable based on the marks
        (marks >=50) ? pass_total : fail_total += 1;
    }
    
    cout<< "pass: " << pass_total << endl;
    cout<< "fail: " << fail_total << endl;
    return 0;
}