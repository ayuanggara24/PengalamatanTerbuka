#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

void main()
{ 

		int a[MAX],num,key,i;
		char ans;
		int create(int);
		void linear_prob(int [],int,int),display(int []);
//clrscr();
		printf("\n Collision Handling By Linaer Probling");
		for(i=0;i<MAX;i++)
		a[i]=-1;
	do
	{
		printf("\n Masukkan Angka ");
		scanf("%d",&num);
		key=create(num);
		linear_prob(a,key,num);
		printf("\n Apakah anda mau lanjut(Y/N");
		ans=getch();
	}
	while(ans=='y');
		display(a); 
		getch();
}