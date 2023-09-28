#include "lab2_oop.hh"
#include <iostream>

void read(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
}

void print(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int max(int *arr, int n) {
    if (n <= 0) {
        // hooson esvel buruu utga edr in 
        // uyd 0 butsaay
        return 0;
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    // ih utgiig butsaana, guisnii daraa
    return maxVal;
}

// asuudal hhaha
int gcd(int *arr, int n) {
    if (n <= 0) {
        // hooson esvel buruu utga edr in 
        // uyd 0 butsaay
        return 0;
    }

    int result = arr[0];
    for (int i = 1; i < n; i++) {
        int num = arr[i];
        while (num != 0) {
            int temp = num;
            num = result % num;
            result = temp;
        }
    }
    return result;
}

// zugeer elementiin utga davhardsan ch negtgene
int *concat(int *arr1, int n1, int *arr2, int n2) {
    // result iin pointer iig n1+n2 
    int *result = new int[n1 + n2];

    // tus burt ni guilgen utgiig onoono
    for (int i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];
    }
    return result;
}

int *subarray(int *arr, int n, int start, int length) {
    if (start < 0 || start >= n || length <= 0) {
        // deerh nuhtsul zaaval biyleh shaardlagatai
        // es buguus 0 gsn utga butsaay, ajillahgui
        return 0;
    }

    // 0 es length hurtel guiged shine massive d hadgalna
    int *result = new int[length];
    for (int i = 0; i < length; i++) {
        result[i] = arr[start + i];
    }
    // tgd butsaana
    return result;
}

int *add(int *arr, int n, int index, int value) {
    if (index < 0 || index > n) {
        // deerh nuhtsul zaaval biyleh shaardlagatai
        // es buguus 0 gsn utga butsaay, ajillahgui
        return 0;
    }

    // element nemeh tul +1
    int *result = new int[n + 1];
    // guigeed hadgalna
    for (int i = 0; i < index; i++) {
        result[i] = arr[i];
    }

    // daragdah buyu uurchlugduh element der utgiig daran oruulna
    result[index] = value;

    for (int i = index; i < n; i++) {
        result[i + 1] = arr[i];
    }

    // butsaana
    return result;
}

int *del(int *arr, int n, int index) {
    if (index < 0 || index >= n) {
        // deerh nuhtsul zaaval biyleh shaardlagatai
        // es buguus 0 gsn utga butsaay, ajillahgui 
        return 0;
    }
    
    // horogdoh tul -1
    int *result = new int[n - 1];

    // guine, hadgalna index hurtel
    for (int i = 0; i < index; i++) {
        result[i] = arr[i];
    }
    // index hursnii daraa +1 buyu negiig unjin hadgalna
    // ingesneer tuhain pos dahi utgiig hasna
    for (int i = index + 1; i < n; i++) {
        result[i - 1] = arr[i];
    }
    return result;
}
