// Q8 Print first ‘n’ fibonacci numbers.
#include <iostream>
using namespace std;
int main( ) {
int n;
cout<<" Enter the Number = ";
cin >> n;
int fibonacci = 1, f1 = 1;
cout << fibonacci << " " << f1 << " ";
for (int i = 3; i <= n; i++) {
int next = fibonacci + f1;
cout << next << " ";
fibonacci = f1;
f1 = next;
}
}