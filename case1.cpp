#include <iostream>
using namespace std;

int main(){
    int value[100];
    int n;
    int maks=-999;
    
    cout<<"Masukkan n : ";cin >> n;
    for (int i = 2; i <=n; i++){
        cout<<"Masukkan nilai : ";cin >>value[i];
        if(value[i]>=maks){
            maks=value[i];
        }
    }
    cout<< "Maks = "<<maks;
}