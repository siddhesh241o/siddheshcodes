#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
    for(int i = 0;i < 5;i++){
        for(int j = 5-i-1;j >= 0;j--){
            cout << " ";
        }
        for(int j = 0;j < i;j++){
            cout << i+j+1;
        }
        cout << 2*i+1;
        for(int j = i;j > 0;j--){
            cout << i+j;
        }
        for(int j = 5-i-1;j >= 0;j--){
            cout << " ";
        }
        cout << endl;
    }
}