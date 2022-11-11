#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int n,m;
		cin>>n;
		int newsize=n;
		long a[10000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		char b;
		int x,y,z;
		for(int i=0;i<m;i++)
		{
			cin>>b;
			if( b== 'I')
			{
				cin>>x>>y;
				newsize=newsize+y;
			for(int k=n-1;k>=x;k--)
				{
					a[k+y]=a[k];
				}
			for(int j=0;j<y;j++)
			{
				cin>>z;
				a[x]=z;
				x++;
			}
			}else if(b=='D')
			{
				cin>>x>>y;
				newsize=newsize-y;
				for(int k=x;k<n;k++)
				{
					a[k]=a[k+y];
				}
			}else
			{
				cin>>y;
				for(int k=newsize ; k<newsize+y;k++)
				{
					cin>>a[k];
				}
			}
		}
		cout<<"#"<<p<<" ";
		for(int i=0;i<10;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
