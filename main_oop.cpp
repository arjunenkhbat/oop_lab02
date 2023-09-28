#include "lab2_oop.hh"
#include <iostream>

using namespace std;

int main()
{
        cout << endl;
        cout << "n, m ni tus bur A, B massive iin hemjee bolno" << endl;
        cout << endl;
        cout << "---------------------------------------------" << endl;
        cout << "n iin utgiig oruul, arjuna: ";
        int n, m;
        cin>> n;
        int * A = new int[n];
        cout << "A iin utgiig oruul, arjuna: ";
        read(A, n);

        cout << "m iin utgiig oruul, arjuna: ";
        cin>> m;
        cout << "B iin utgiig oruul, arjuna: ";
        int * B = new int[m];
        read(B, m);

        print(A, n);
        print(B, m);
        cout << "A massive in max = ";
        cout<<max(A, n);
        cout << endl;
        cout << "A massive in gcd = ";
        cout<<gcd(A, n);
        cout << endl;

        cout << "A, B iin concat buyu C massive = ";
        int * C = concat(A, n , B, m);
        print(C, n + m);
        cout << endl;

        cout << "subarray buyu D massive (start=1, len=3) = ";
        int * D = subarray(C, n + m, 1, 3);
        print(D, 3);
        cout << endl;

        cout << "add buyu E massive (pos=1, value=13) = ";

        int *E = add(A, n, 1, 13);
        print(E, n + 1);
        cout << endl;

        cout << "del buyu A massive (pos=1) = " << endl;
        int *F = del(A, n, 1);
        print(F, n - 1);

        return 0;
}
