#include <iostream>
using namespace std;
int a[6], answer,leng,K;
char n[7];
int convert_ToNumber()
{
	int val=0;
	leng=0;
	answer=0;
	for(int i=0;n[i]!=0;i++)
	{
		leng++;
		a[i]=n[i]-'0';
		answer=answer*10+a[i];
	}
	//cout<<answer<<endl;
	return answer;
}
void swap(int x, int y)
{
	int temp = a[y];
	a[y]=a[x];
	a[x]=temp;
}
void play(int i, int k)
{
	if(i == leng)
	{
		bool check =false;
		if((K-k) % 2  != 0)
		{
			swap(leng-1, leng-2);
			check=true;
		}
		int number=convert_ToNumber();
		if(number>answer)
		{
			answer=number;
			if(check)
			{
				swap(leng-1,leng-2);
			}
			return ;
		}
	}
	if(k<K)
	{
		for(int index=i+1;index<leng;index++)
		{
			swap(i,index);
			play(i+1,k+1);
			swap(i,index);
		}
	}
	play(i+1,k);
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	for(int p=1;p<=t;p++)
	{
		cin>>n>>K;
	}
	play(0,0);
	cout<<answer<<endl;
	return 0;
}
