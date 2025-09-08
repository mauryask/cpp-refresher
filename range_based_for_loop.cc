#include <iostream>
using namespace std;

void print()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // Kind of for each loop in java
    for (int ele : arr)
    {
        cout << ele << endl;
    }

    for (int ele : {
             1,
             2,
             4,
             5,
             6,
             8,
             9,
         } /*A valid range expression also valid here*/)
    {
        cout << ele << endl;
    }

    temp(arr);
}

void temp(int arr[])
{
    // This is invalid here: As passing array to a function is
    // a pointer to the first element not the whole array
    // for(int ele : arr){
    //     cout << ele << endl;
    // }
}

int main()
{
    print();
    return 0;
}