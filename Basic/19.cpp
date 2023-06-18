#include<iostream>
using namespace std;
int main()
{
	int inputN=0,t[24];
	cin>>inputN;
	for(int i=0;i<inputN;i++)	{
		int a=0,b=0;
		cin>>a>>b;
		for(int j=a-1;j<b-1;j++){t[j]++;}
	}
	inputN=t[0];
	for(int i=0;i<24;i++)
    if(inputN<t[i])inputN=t[i];
	cout<<inputN<<endl;
	return 0;
}
