#include<iostream>
#include<string>
#include<sstream> 
using namespace std;

int main()
{
	int inputBus=0,inputLine=0;
	
	cin>>inputBus>>inputLine; 
	cin.ignore(1,'\n'); 
	int reArray[inputLine][inputBus];
	for(int bus=0;bus<inputBus;bus++)	{
		string nums;
		getline(cin,nums);
		istringstream cutStr(nums);
		for(int line=0;line<inputLine;line++)	{
			string save;
			getline(cutStr,save,' ');
			istringstream chType(save);
			chType>>reArray[line][bus];
		}
	}
	for(int i=0;i<inputLine;i++)	{
		for(int j=0;j<inputBus;j++)		{
			if(j==inputBus-1) cout<<reArray[i][j]<<endl;
			else cout<<reArray[i][j]<<" ";
		}
	}
	return 0;
}
