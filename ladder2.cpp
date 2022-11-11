#include <iostream>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	for(int p=1;p<=10;p++)
	{
		int t,x,y;
		cin>>t;
		int a[102][102];
		int c[102][102];
		for( x=1;x<=100;x++)
		{
			for( y=1;y<=100;y++)
			{
				cin>>a[x][y];
				c[x][y]=a[x][y];
			}
		}
		for(int k=0;k<102;k++)
		{
			a[0][k]=0;
			a[k][0]=0;
			a[101][k]=0;
			a[k][101]=0;
			c[0][k]=0;
			c[k][0]=0;
			c[101][k]=0;
			c[k][101]=0;
		}
		int save_y;
		int b[102];
		int d[102];
		for(int k=1;k<=100;k++)
		{
			b[k]=0;
		}
		int dem=1;
		int index=0;
		for( y=1;y<=100;y++)
		{
			save_y=y;
			x=1;
			if(a[x][y] ==1)
			{
				d[index]=y;
				for(;;)
				{
					if(a[x][y+1] ==1)
					{
						a[x][y]=0;
						dem++;
						y++;
					}else if(a[x][y-1] == 1)
					{
						a[x][y]=0;
						dem++;
						y--;
					}else
					{
						x++;
						dem++;
					}
					if(x==100)
					{
						//cout<<"- "<<d[index]<<" ";
						b[index]=dem;
						index++;
						break;
					}
				}
				//cout<<save_y;
				dem=1;
				y=save_y;
		for(int  m=1;m<=100;m++)
		{
			for(int  n=1;n<=100;n++)
			{
				a[m][n]=c[m][n];
			}
		}
			}
		}
		//for(int k=0;k<index;k++)
	//	{
	//		cout<<d[k]<<"-" <<b[k]<<" ";
	//	}
		int minpath=b[0];
		int result=d[0];
		for(int k=1;k<index;k++)
		{
			if(b[k] < minpath)
			{
				minpath=b[k];
				result=d[k];
			}
			if(b[k]==minpath)
			{
				if(d[k] > result)
				{
					result=d[k];
				}
			}
		}
		cout<<"#"<<p<<" "<<result-1<<endl;
		//cout<<"\n";
	}
	
	
	return 0;
}
