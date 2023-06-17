#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
    double n; 
    double sum1 = 0, sum2 = 0;
    while(cin >> n){
        if(n < 121){
            sum1 += n * 2.1;
            sum2 += n * 2.1;
            break;
        }
        sum1 +=120*2.1;
        sum2 +=120*2.1;
        
        if(n < 331){
            sum1 += (n-120) * 3.02;
            sum2 += (n-120) * 2.68;
            break;
        }
        sum1+= 210*3.02;
        sum2+= 210*2.68;

        if(n < 501){
            sum1 += (n-330) * 4.39;
            sum2 += (n-330) * 3.61;
            break;
        }
        sum1 += 170 *4.39;
        sum2 += 170*3.61;
        if(n < 701){
            sum1 += (n-500) * 4.97;
            sum2 += (n-500) * 4.01;
            break;
        }
        sum1 += 200 * 4.97;
        sum2 += 200*4.01;

        sum1 += (n-700) * 5.63;
        sum2 += (n-700) * 4.5;

    }
    cout<< fixed <<  setprecision(2)<< "Summer months:"<<sum1<<endl;
    cout<<  fixed <<  setprecision(2)<< "Non-Summer months:"<<sum2<<endl;
    return 0;
}
