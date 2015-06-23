#include<stdio.h>
int main()
{

	/*Declarearea variabilelor */
	int a[100][100],b[100][100],c[100][100];
	FILE *fin;
	fin=fopen("matrice.in","r");
	int i,j,k;
	int m1,n1,m2,n2;

	/*Citirea datelor de intrare */  

	fscanf(fin,"%d %d ",&m1,&n1);
	for ( i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			fscanf(fin,"%d",&a[i][j]);
	
	fscanf(fin,"%d %d",&m2,&n2);
	for ( i=0;i<m2;i++)
		for(j=0;j<n2;j++)
			fscanf(fin,"%d",&b[i][j]);

	/*Testare compatibilitate inmultire */
	if( n1!=m2)
	{
		printf("Matricele nu se pot inmulti");
		return -1;
	}
	
	/*Algoritmul de inmultire*/
	for ( i=0;i<m1;i++)
		for(j=0;j<n2;j++)
		{
			int sum=0;
			for(k=0;k<n1;k++)
				sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
		}

	/*Afisare rezultat */
	printf("Afisarea matricei rezultat:\n");
	for( i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
			printf("%d  ",c[i][j]);
		printf("\n");
	}
}	
			

