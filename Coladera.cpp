#include<iostream>

using namespace std;

void llenaruno(int vec[], int n);
void coladera(int vec[], int n);
void mostrar(int vec[], int n);

int main()
{
	int vec[1000];
	llenaruno(vec,1000);
	coladera(vec,1000);
	mostrar(vec,1000);
	
	cin.get();
	cin.get();
	}
void llenaruno(int vec[], int n)
{
	for(int i=1;i<=n; i++)
	{
		vec[i]=1;
	}
}
void coladera(int vec[], int n)
{
	for(int i=2;i<n; i++)
	{
		if(vec[i]==1)
			for(int j=i+1;j<n;j++)
			{
				if(j%i==0)
				vec[j]=0;
			}
	}
}
void mostrar(int vec[], int n )
{
	for(int i=0;i<n; i++)
	{
		if(vec[i]==1)
		{
		cout<<i<<"\n";
		}
	}

	}
	
	
	
	
