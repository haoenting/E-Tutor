#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n, max = -100000, min = 100000;
    for(int i=0; i<10; i++){
        cin >> n;
        if(n > max)
            max  = n;
        if(n<min)
            min = n;
    }
    cout<<  fixed <<  setprecision(2)<<"maximum:"<<max<<endl;
    cout<<  fixed <<  setprecision(2)<<"minimum:"<<min<<endl;
    return 0;
}
