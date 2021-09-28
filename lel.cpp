#include <iostream>
using namespace std;
int main()
{
	float s=0, x;
	
	while(s<50)
	{
		cout<<"Wprowadz liczbe: ";
		cin>>x;
		s=s+x;
	}
	cout<<s<<endl;
	return 0;
}
