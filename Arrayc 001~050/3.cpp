#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    for(int i=0; i<6; i++){
        int n;
        cin >>n;
        sum += pow(n,3);
    }
    cout<<sum<<endl;
    return 0;
}
