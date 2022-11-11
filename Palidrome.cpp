#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int n;
		cin>>n;
		char a[8][8];
		char b[8];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cin>>a[i][j];
			}
		}
	/*	for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
		*/
		int dem=0;
		int check =0;
		int change;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<=(8-n);j++)
			{
				for(int k=0;k<n;k++)
				{
					b[k]=a[i][j+k];
				}
				for(int k=0;k<n/2;k++)
				{
					if(b[k] != b[n-1-k])
					{
						check++;
						break;
					}
				}
				if(check==0)
				{
					dem++;
				}else
				{
					check=0;
				}
			}

		}
		for(int j=0;j<8;j++)
		{
			for(int i=0;i<=(8-n);i++)
			{
				for(int k=0;k<n;k++)
				{
					b[k]=a[i+k][j];
				}
				for(int k=0;k<n/2;k++)
				{
					if(b[k] != b[n-1-k])
					{
						check++;
						break;
					}
				}
				if(check==0)
				{
					dem++;
				}else
				{
					check=0;
				}
			}

		}
		cout<<"#"<<p<<" "<<dem<<endl;
	}
	return 0;
}
