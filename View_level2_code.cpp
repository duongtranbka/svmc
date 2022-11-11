#include <iostream>
using namespace std;/*
int checkarea(long a[1000], int t)
{
	int sum=0;
	long b[4];
	int index=0;
	for(int i=2; i<(t-2);i++)
	{
		b[0]=abs(a[i]-a[i-2]);
		b[1]=abs(a[i]-a[i-1]);
		b[2]=abs(a[i]-a[i+1]);
		b[3]=abs(a[i]-a[i+2]);
		int min =b[0];
		for(int j=1;j<4;j++)
		{
			if(b[j]<min)
			{
				min=b[j];
			}
		}
		cout<<min<<endl;
		sum=sum+min;
	}
	return sum;
} */
int main()
{
	//freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int t;
		cin>>t;
		long a[1000];
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
		}
		//int result= checkarea(a,t);
		int sum=0;
	long b[4];
	for(int i=2; i<(t-2);i++)
	{
		b[0]=a[i]-a[i-2];
		if(b[0] <0 )
		{
			b[0]=0;
		}
		b[1]=a[i]-a[i-1];
		if(b[1] <0 )
		{
			b[1]=0;
		}
		b[2]=a[i]-a[i+1];
		if(b[2] <0 )
		{
			b[2]=0;
		}
		b[3]=a[i]-a[i+2];
		if(b[3] <0 )
		{
			b[3]=0;
		}
		int min =b[0];
		for(int j=1;j<4;j++)
		{
			if(b[j]<min)
			{
				min=b[j];
			}
		}
		//cout<<min<<endl;
		sum=sum+min;
	}
		cout<<"#"<<p<<" "<<sum<<endl;
	}
	return 0;
}
