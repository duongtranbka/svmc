#include <iostream>
using namespace std;
/*bool pushRed(int i, int j, int a[100][100])
{
	int check=0;
	for(int x=i+1;x<100;x++)
	{
		if(i==99)
		{
			return true;
			break;
		}
		if(a[x][j] == 2)
		{
			check++;
			break;
		}
	}
		if(check ==0)
	{
		return true;
	}else
	{
		return false;
	}
}
bool pushBlue(int i, int j, int a[100][100])
{
	int check=0;
	for(int x=i;x>=0;x--)
	{
		if(i==0)
		{
			return true;
		}
		if(a[x][j] == 1)
		{
			check++;
			break;
		}
	}
	if(check ==0)
	{
		return true;
	}else
	{
		return false;
	}
} */
int main()
{
	//freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int n;
		cin>>n;
		int a[100][100];
		for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				cin>>a[i][j];
			}
		}
		/*for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				if(a[i][j] == 1 || a[i][j] == 2)
				{
					if(pushRed(i,j,a)== true || pushBlue(i,j,a)== true)
					{
						a[i][j]=0;
					}
				}
			}
		}
		/*for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		} */
		int k,z;
		int dem=0;
		for(int j=0;j<100;j++)
		{
			for(int i=0;i<100;i++)
			{
				if(a[i][j] == 1 && i <100)
				{
					for(int k = i+1;k<100;k++)
					{
						if(a[k][j] == 1)
						{
							i=k-1;
							break;
						}
						if(a[k][j] ==2)
						{
							dem++;
							i=k;
							break;
						}
					}
					
				}
			}
		}
		cout<<"#"<<p<<" "<<dem<<endl;
	}
	return 0;
}
