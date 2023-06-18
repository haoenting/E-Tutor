#include<iostream>
#include<cmath>
using namespace std;
int m (int input){
	if(input==0||input==1){
		return input+1;
	}
	else return m(input-1)+m(ceil(input/2));
} 
int main(){
	int input=0;
	
	cin>>input;
	cout<<m(input)<<endl;
	return 0;
}
