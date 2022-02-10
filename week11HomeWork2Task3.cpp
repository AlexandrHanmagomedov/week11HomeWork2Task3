#include <iostream>
#include<cmath>
using namespace std;

int two_10(int n) {

    int _10 = 0;
    int a = 1, last_digit;
    int temp = n;

    while (temp != 0) {
        last_digit = temp % 10;
        //cout<< last_digit <<endl;
        _10 = _10 + last_digit * a;
        //cout << _10 << endl;
        a = a * 2;
        //cout << a << endl;
        temp = temp / 10;
        //cout << temp << endl;
        //cout << "------------------------------------------------------------------------ - -" << endl;
    }
    return _10;
}

int main()
{
    long n, two;
    cout << "Vvedite dvoi4noe 4islo\n";
    cin >> n;
    two = two_10(n);
    cout << n << " dvoi4noe = " << two_10(n) << " v desiati4noy";
    cout << "\n\n";
    //n = 1111 % 10;
   // cout << n << "\nprocent";
    return 0;
}