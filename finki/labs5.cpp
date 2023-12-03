
#include <iostream>
using namespace std;


//function for calculating the reversed number
int reverse (int number) {
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

//function for checkikng if the reversed number is a palindrome

bool isPalindrome(int number){
    return number == reverse(number);
}

//function for finding the largest palindrome in the range

int findLargest (int start, int end){
    int largestpalindrome = 0;

    for (int i = start ; i <= end ; i++){
        if (isPalindrome(i) && i > largestpalindrome){
            largestpalindrome = i;
        }
    }
    return largestpalindrome;
}


int main (){
    int start, end;
    cin >> start >> end;

    int result = findLargest(start ,end);

    if (result != 0){
        cout << result;
    }

    return 0;
}