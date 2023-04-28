#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b,c,max;
	cout<<"Enter 3 numbers:"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	max=a;
	else if(b>a && b>c)
	max=b;
    else
	max=c;
	
	cout<<"Max ="<<max;
	getch();
}
