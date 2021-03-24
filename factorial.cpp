#include <iostream>
using namespace std;
int factorial();
int x;

factorial(int x)
{
    if (x==1)
        {
        return 1;
        }
    else{
        return x*factorial(x-1);
        }

}
int main() {
     cout <<  "enter number" <<endl;
     cin >> x;
     cout << "factorial of "<< x << " is " << factorial(x) << endl;

}
