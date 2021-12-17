#include<iostream>
using namespace std;
int const MAX = 5;
void printArray(int *ptr);
int main()
{
    int number[MAX] = {10,20,30,40,50};
    printArray(number); //&number[0]
 
 return 0;
}
void printArray(int *ptr)
{
    for(int i = 0; i<MAX; i++)
    {
        cout << *ptr++ << endl;;
    }
}