#include <stdio.h>
#include <math.h>
/*
	MSSV:110124034
	Hoten: Dang Quoc Dinh
	Lop: DA24TTA
*/
void nhap(int a[],int n);
void xuat(int a[],int n);
void tong(int a[],int n);
void max(int a[],int n);
void min(int a[],int n);
void tb(int a[],int n);
void giamdan(int a[],int n);
void demso(int a[],int n,int x);




int main()
{
	int n,x;		//khai bao bien 
	do						//nhap n
	{
		printf("n= ");
		scanf("%d",&n);
		
	}while(n<0||n>24);
	int a[n];
	//    function call
	nhap(a,n);
	xuat(a,n);
	tong(a,n);
	max(a,n);
	min(a,n);
	tb(a,n);
	giamdan(a,n);
	printf("\nnhap muc tieu so gio hoc: ");
	scanf("%d",&x);
	demso(a,n,x);
	
	return 0;
	
}

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("thoi gian hoc tap ngay thu %d\n: ",i+1);
		scanf("%d",&a[i]);
	}
	
}//end nhap.

void xuat(int a[],int n)
{
	printf("thoi gian hoc tap lan luot la: ");
	for (int i=0;i<n;i++)
	{
		printf("\t%d ",a[i]);
	}
}//end xuat.


void tong(int a[],int n)
{
	int s=0;
	for (int i=0;i<n;i++)
	{
		s+=a[i];
	}
	printf("\ntong thoi gian hoc cua tat ca cac ngay la: %d",s);
}//end tong.

void max(int a[],int n)
{
	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
		
	}
	printf("\nngay hoc nhieu nhat la: %d gio.",max);
}//end max.


void min(int a[],int n)
{
	int min=25;
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			
		}
	}
	printf("\nngay hoc it nhat la: %d gio.",min);
	
	
}//end min.


void tb(int a[],int n)
{
	int  tb=0;
	for(int i=0;i<n;i++)		
	{
		tb=tb+a[i];
		
	}
	printf("\ntrung thoi gian hoc la: %.2f gio.",tb/float(n));
}//end tb..

void giamdan(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{	//hoan vi 
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n^__Mang sau khi da sap xep__^\t");	//ket qua thu duoc 
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}//end giamdan.

void demso(int a[],int n,int x)
{
	int dem=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			dem++;
		}
	
	}
	printf("co %d ngay dat duoc muc tieu.",dem);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<x)
		dem++;
	}
	printf("\nco %d ngay khong dat duoc muc tieu.",dem);
}









