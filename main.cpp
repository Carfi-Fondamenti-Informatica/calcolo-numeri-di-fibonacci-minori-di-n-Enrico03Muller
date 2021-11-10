#include <iostream>
using namespace std;
// 1,1,2,3,5,8
int main() {
    int n = 0;
    cout << "Inserire un numero maggiore o uguale a 1" << endl;
    cin >> n;

    if (n>=1){
        int k = 1;
        int a = 1;
        int b = 1;
        int c = a + b;
        cout << a << endl;
        cout << b << endl;
        while (k < n){
            k++;
            cout << c << endl;
            a = c - a;
            b = c;
            c = a + b;
        }
    }else{
        cout << "errore" << endl;
    }
    return 0;
}
