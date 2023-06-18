#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while(cin >>n){
        double arr[n], a,b;
        for(int count=0; count<n; count++){
            cin >> a>>b;
            arr[count] = a*a + b*b;
        }
        sort(arr, arr+n);
        if(n%2==1)
            cout << fixed <<  setprecision(2)<< pow(arr[n/2], 0.5)<<endl;
        else{
            cout << fixed <<  setprecision(2)<< pow(arr[n/2-1], 0.5)<<endl;
            cout << fixed <<  setprecision(2)<< pow(arr[n/2], 0.5)<<endl;
        }
    }

    return 0;
}
