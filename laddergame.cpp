#include <iostream>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int n,b,m;
		cin>>n>>b>>m;
		int a[102][102];
		for(int i=0;i<n+2;i++)
		{
			for(int j=0;j<n+2;j++)
			{
				a[i][j]=0;
			}
		}
		int x,y,z,t;
		for(int k=0;k<m;k++)
		{
			cin>>x>>y>>z>>t;
			a[x][y]=t;
			a[z][t]=y;
		}
		a[n][b]=-1;
	/*	for(int i=0;i<n+2;i++)
		{
			for(int j=0;j<n+2;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n"; */
		x=n;
		y=b;
		int result;
		for(;;)
		{
			if(a[x-1][y] >0)
			{
				x--;
				y=a[x][y];
			}else
			{
				x--;
			}
			if(x==1)
			{
				result=y;
				break;
			}
		}
		cout<<"#"<<p<<" "<<result<<endl; 
	}
	return 0;
}
