#include <bits/stdc++.h>
using namespace std;

template <class T>
class Arithmetic {
    private:
        T a;
        T b;
    
    public:
        Arithmetic(T a, T b);
        T Add();
        T Sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::Add() {
    return a+b;
}

template <class T>
T Arithmetic<T>::Sub() {
    return a-b;
}

int main() {
    Arithmetic<int> obj1(10, 20);
    Arithmetic<float> obj2(10.23f, 5.923f);
    Arithmetic<double> obj3(11.932432432, 9.23413241234);
    Arithmetic<char> obj4('a', 'b');

    cout << "Sum of int : " << obj1.Add() << ", Sub of int : " << obj1.Sub() << "\n";
    cout << "Sum of float : " << obj2.Add() << ", Sub of float : " << obj2.Sub() << "\n";
    cout << "Sum of double : " << obj3.Add() << ", Sub of double : " << obj3.Sub() << "\n";
    cout << "Sum of char : " << (int)obj4.Add() << ", Sub of char : " << (int)obj4.Sub() << "\n";
}

/*
Sum of int : 30, Sub of int : -10
Sum of float : 16.153, Sub of float : 4.307
Sum of double : 21.1666, Sub of double : 2.6983
Sum of char : -61, Sub of char : -1
*/