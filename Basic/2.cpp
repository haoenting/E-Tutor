#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n;
    while(cin >>n){
        cout<< fixed  <<  setprecision(1) <<n*1.6<<endl;
    }
    return 0;
}
