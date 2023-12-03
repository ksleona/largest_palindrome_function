////
//// Created by krste on 03/12/2023.
////
//
//We define the value d for a triplet of integers a, b, and c, in such a way that it is calculated as the sum of the absolute differences between the first and second number on one side, and the second and third number on the other side:
//
//d=|a−b|+|b−c|
//
//
//Write a program that reads N triplets of integers from the keyboard (N is entered from the keyboard), and that finds and prints the smallest value for d among the read triplets. The value of d for each triplet is calculated IN A FUNCTION.

#include <iostream>
using namespace std;
#include <cmath>

int calcD(int a, int b, int c){
    return abs (a - b) + abs (b - c);
}

int findsmallestD(int n){
    int smallestD = INT_MAX;

    for (int i = 0; i < n ; i++){
        int a, b, c;

        cin >> a >> b >> c;

        int currentD = calcD(a, b, c);

        if (currentD < smallestD){
            smallestD = currentD;
        }
    }
    return smallestD;
}


int main(){
    int n;
    cin >> n;

    int result = findsmallestD(n);

    cout << result;

    return 0;
}