#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
    for(int i = 0;i < 5;i++){
        for(int j = 5-i-1;j >= 0;j--){
            cout << " ";
        }
        for(int j = 0;j <= i;j++){
            cout << "*" << " ";
        }
        for(int j = 5-i-1;j >= 0;j--){
            cout << " ";
        }
        cout << endl;
    }
}