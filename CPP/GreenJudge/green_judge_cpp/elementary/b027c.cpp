
#include<iostream>
#include<algorithm>
using namespace std;
int min(int a,int b,int c)
{
	int m[3];
	m[0]=a;m[1]=b;m[2]=c;
	sort(m,m+3);
	return m[0];
}
int main()
{
	int m,n,i,j,max=0;
	cin>>m>>n;
	int a[m][n],b[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	//	cout<<endl;
	for(i=0;i<m;i++)
		{
			if(a[i][0]==1) b[i][0]=0;
			else b[i][0]=1;
		}
	for(j=0;j<n;j++)
		{
			if(a[0][j]==1) b[i][0]=0;
			else b[0][j]=1;
		}
	for(i=1;i<m;i++)
		for(j=1;j<n;j++)
			{
				if(a[i][j]!=0) b[i][j]=0;
				else
					{
					b[i][j]=1+min(b[i-1][j],b[i][j-1],b[i-1][j-1]);
					}	
			}
	/*	
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<b[i][j]<<" ";
			}	
		cout<<endl;
		}*/
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			{
				if(b[i][j]>max&&b[i][j]<9999) max=b[i][j];
			}
	cout<<max*max;
    return 0;
}
