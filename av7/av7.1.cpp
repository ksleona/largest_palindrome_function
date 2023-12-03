#include <iostream>
using namespace std;

int main(){
    int n1, n2, element, i;
    cin >> n1;
    cin >> n2;

    int a[100], b [100];

    if (n1 != n2){
        cout << "arrays are not equal" << endl;
    }
    else{
        cout << "Elements of the first array:" << endl;
        for (i = 0 ; i < n1 ; i++){
            cout << "a[ " << i << "]=" << endl;
            cin >> a [i];
        }
        cout << "Elements of the second array:"<< endl;
        for (i = 0 ; i < n2 ; i++){
            cout << "b[ " << i << "]= " << endl;
            cin >> b[i];
        }
        for (i = 0; i < n1 ; i++){
            if (a[i] != b[i]){
                break;
            }
        }
        if (i == n1){
            cout << "arrays are equal" << endl;

        }
        else{
            cout << "Arrays are not equal" << endl;
        }
    }

    return 0;
}