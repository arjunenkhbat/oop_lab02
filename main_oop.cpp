#include "lab2_oop.hh"
#include <iostream>

using namespace std;

int main()
{
        int n, m;
        cin>> n;
        int * A = new int[n];
        read(A, n);

        cin>> m;
        int * B = new int[m];
        read(B, m);

        print(A, n);
        print(B, m);

        cout<<max(A, n);
        cout<<gcd(A, n);

        int * C = concat(A, n , B, m);
        print(C, n + m);
        int * D = subarray(C, n + m, 1, 3);
        print(D, 3);

        int *E = add(A, n, 1, 13);
        print(E, n + 1);

        int *F = del(A, n, 1);
        print(F, n - 1);

        return 0;
}
