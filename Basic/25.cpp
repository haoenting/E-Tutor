#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >>n;
    char c;
    c = getchar();
    while(n>0){
        int sum =0;
        while(c = getchar()){
            if(c == '\n')
                break;
            sum += int(c);
        } 
        cout<<sum<<endl;
        n--;
    }
    return 0;
}
