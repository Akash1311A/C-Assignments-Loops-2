// Q6 WAP to print the sum of a given number and its reverse.
#include <iostream>
using namespace std;
int main( ) {
int n;
cout<<"Enter the number = ";
cin >> n;
int y = n, x = 0;
while (y > 0) {
x *= 10;
x += (y % 10);
y /= 10;
}
cout << n + x << endl;
}