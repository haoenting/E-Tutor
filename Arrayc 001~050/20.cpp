#include <iostream>  
#include <cstdio>  
#include <iomanip>  
#include <cmath>  
#include <algorithm>  
#include <string>  
using namespace std;  
  
int main(){  
    int n;
    bool check = true;
    while(cin >>n){
        int arr[n], k;
        for(int i=0; i<n; i++){
            arr[i]=0;
        }
        for(int i=0; i<n; i++){
            cin>>k;
            arr[k]++;
        }
        for(int i=0; i<n; i++){
            if(arr[i]>1){
                check = false;
                break;
            }
        }
        if(check){
            cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;  
} 
