#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter The Number ";
    cin>>number;
    int factorial = 1;
    for(int i= number ; i>=1; i--)
    {
        factorial = factorial*i;
    }
    cout<<"factorial of "<<number<<" is :"<<factorial;
    return 0;
}
