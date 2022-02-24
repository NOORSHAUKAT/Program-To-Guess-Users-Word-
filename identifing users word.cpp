#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a[7]={'A','E','I','M','Q','U','Y'};char b[7]={'B','F','J','N','R','V','Z'};
	char c[6]={'C','G','K','O','S','W'};char d[6]={'D','H','L','P','T','X'};
    int e[100];int f[100];int j;
	cout<<"How many alphabets do you have in your word?"<<endl;
	cin>>j;
	for(int i=0;i<=6;i++)
	{
		cout<<"   "<<a[i]<<"   "<<b[i]<<"   "<<c[i]<<"   "<<d[i]<<endl;
	}
	cout<<"In which column you have your first alphabet.... "<<endl;
	for(int i=0;i<=j-1;i++ )
	{
		cin>>e[i];
		cout<<"Enter column containing next alphabet......."<<endl;
	}
	for(int i=0;i<=j-1;i++)
	{
		if(e[i]==1)
		{
			for(int i=0;i<=6;i++)
			{
				cout<<"   "<<a[i];
			}cout<<endl;
		}
		else if(e[i]==2)
		{
			for(int i=0;i<=6;i++)
			{
				cout<<"   "<<b[i];
			}cout<<endl;
		}
		else if(e[i]==3)
		{
			for(int i=0;i<=6;i++)
			{
				cout<<"   "<<c[i];
			}cout<<endl;
		}
		else if(e[i]==4)
		{
			for(int i=0;i<=6;i++)
			{
				cout<<"   "<<d[i];
			}cout<<endl;
		}
		
	}
	cout<<"Above is another table, Can you again tell me in which column you have your first alphabet..."<<endl;
	for(int i=0;i<=j-1;i++)
	{
		cin>>f[i];
		cout<<"Next alphabet is in which column....."<<endl;
	}cout<<"Was this your word!.....";
	for(int i=0;i<=j-1;i++)
	{
		if(e[i]==1)
		{
			for(int k=1;k<=7;k++)
			{
					if(f[i]==k)
					{
					  cout<<a[k-1];	
					}
			}
			
		}
		else if(e[i]==2)
		{
			for(int k=1;k<=7;k++)
			{
					if(f[i]==k)
					{
					  cout<<b[k-1];	
					}
			}
			
		}
		else if(e[i]==3)
		{
			for(int k=1;k<=7;k++)
			{
					if(f[i]==k)
					{
					  cout<<c[k-1];	
					}
			}
			
		}
		else if(e[i]==4)
		{
			for(int k=1;k<=7;k++)
			{
					if(f[i]==k)
					{
					  cout<<d[k-1];	
					}
			}
			
		}
		
	}
}
