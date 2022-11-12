#include <iostream>
using namespace std;
bool checkpal(char b[100], int n)
{
	int check=0;
	for(int i=0;i<n/2;i++)
	{
		if(b[i] != b[n-1-i])
		{
			check++;
			break;
		}
	}
	if(check == 0)
	{
		return true;
	}else
	{
		return false;
	}
}
int main()
{
//freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int n,maxleng;
		cin>>n;
		char a[100][100];
		for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				cin>>a[i][j];
			}
		}
		maxleng=100;
		char b[100];
		int check=0;
		int result;
		for(int x=1;x<=100;x++)
		{
			for(int i=0;i<100;i++)
			{
				for(int j=0;j<=(100-maxleng);j++)
				{
					for(int k=0;k<maxleng;k++)
					{
						b[k]=a[i][j+k];
					}
					if(checkpal(b,maxleng) ==  true)
					{
						check++;
						result = maxleng;
						break;
					}
				}
			}
			for(int j=0;j<100;j++)
			{
				for(int i=0;i<=(100-maxleng);i++)
				{
					for(int k=0;k<maxleng;k++)
					{
						b[k]=a[i+k][j];
					}
					if(checkpal(b,maxleng) ==  true)
					{
						check++;
						result = maxleng;
						break;
					}
				}
			}
if(check != 0)
{
	break;
}
maxleng--;
		}
		cout<<"#"<<p<<" "<<maxleng<<endl;

	}
	return 0;
}
