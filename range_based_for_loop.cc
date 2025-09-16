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

    for (int ele : { 1,2,3,4,5,6,7,8,9,10} /*A valid range expression also valid here*/)
    {
        cout << ele << endl;
    }

    temp(arr);
}

int string_traverse()
{
    int count = 0;
    char string[] = "this iss smaple string to demonstrate the for loop";

    for (char c : string)
    {
        if (c == 's')
        {
            count++;
        }
    }
    cout << count << endl;
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