#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>
using namespace std;
int main(){
   double h, g;
   while(cin >> h >> g){
        double sum;
        if(g == 1){
            sum = (h-80) * 0.7;
        }
        else{
            sum = (h-70) * 0.6;
        }
        cout<<fixed <<  setprecision(1)<< sum<<endl;
   }
} 
