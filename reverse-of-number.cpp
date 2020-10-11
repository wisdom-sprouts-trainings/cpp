#include <iostream>
using namespace std;
 
int main() {
    int n, reverseNumber = 0, rem;
    cout << "Enter an integer: ";
    cin >> n;
    while(n != 0) {
        rem = n%10;
        reverseNumber = reverseNumber*10 + rem;
        n /= 10;
    }
    cout << "Reversed Number = " << reverseNumber;
    return 0;
}
