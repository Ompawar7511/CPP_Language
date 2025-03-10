// print right anglre pyramid with number 
#include<iostream>
using namespace std;
int main(){
    int a=1;
    for (int i=0;i<5;i++){
        int arr[5][5] = {0};
        int a = 1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
            cout << " " << arr[i][j];
            a++;
            }
            cout << endl;
        }
        cout<<endl;
    }
}

// 1
// 6 2
// 10 7 3
// 13 11 8 4
// 15 14 12 9 5