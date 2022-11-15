#include <iostream>
using namespace std;
int Qx[100000],Qy[100000],Qd[100000];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
char M[302][302];
int dem=0;
int check=0;
//int minpath=0;
int f=-1,r=-1;
void Push( int x, int y, int d)
{
	f++;
	Qx[f]=x;
	Qy[f]=y;
	Qd[f]=d;
}
void Pop( int &x, int &y, int &d)
{
	r++;
	x=Qx[r];
	y=Qy[r];
	d=Qd[r];
}
void BFS(int x, int y)
{
	Push(x,y,0);
	while(r!=f)
	{
		int a,b,d;
		Pop(a,b,d);
		d++;
	/*	for(int i=0;i<4;i++)
		{
			int aa= a + dx[i];
			int bb= b + dy[i];
			if('E'== M[aa][bb])
			{
				dem++;
				break;
			}
			if('B'==M[aa][bb])
			{
				dem=dem+2;
				break;
			}
			if('T' == M[aa][bb])
			{
				dem++;
				break;
			}
		} */
		for(int i=0;i<4;i++)
		{
			int aa= a + dx[i];
			int bb= b + dy[i];
			if('E' == M[aa][bb])
			{
				Push(aa,bb,d);
				M[aa][bb]='R';
			}
			if('B'==M[aa][bb])
			{
				Push(aa,bb,d+1);
			}
			if('T'==M[aa][bb])
			{
				f++;
				Qd[f]=d;
				dem=Qd[f];
				check++;
				break;
			}
		}
		if(check != 0)
		{
		break;}
	}
	if(check == 0)
	{
		dem=0;
	}
}
int main()
{
	//freopen("input.txt","r",stdin);
	int t,x,y;
	cin>>t;
	for(int p=1;p<=t;p++)
	{
		int m,n;
		cin>>m>>n;
		for(int i=0;i<m+2;i++)
		{
			for(int j=0;j<n+2;j++)
			{
				M[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>M[i][j];
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(M[i][j] == 'Y')
				{
					x=i;
					y=j;
					break;
				}
			}
		}
		//cout<<x<< "-"<<y<<endl;
		BFS(x,y);
		f=-1,r=-1;
		if(dem ==0)
		{
			cout<<"Case #"<<p<<endl;
			cout<<"-1"<<endl;
		}else
		{
			cout<<"Case #"<<p<<endl;
			cout<<dem<<endl;
		}
		check=0;
		dem=0;
		//minpath=0;
	}
	return 0;
}
