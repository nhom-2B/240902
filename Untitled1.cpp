#include <stdio.h>
 
const int MAX = 100;

 void NhapMang(int a[], int n){     // nhap gia tri mang A 
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
 void XuatMang(int a[], int n){      // xuat gia tri mang A 
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
int main(){
    int arr[MAX];
    int n;
   
    printf("\n Nhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\n Nhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG A=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG A=====\n");
    XuatMang(arr, n);
    
    int sum;  // khai bao ham sum  
    for(int i = 0;i < n; ++i){
    	sum=sum+arr[i] ; 
	}
    printf("\n in ra tong các phan tu cua mang A %d",sum); 
    
    printf("\n in ra trung binh cong cac phan tu cua mang A %d",sum/n); 
    int a;    // khai bao bien a  
    for(int i = 0;i < n; ++i){  // tinh tong va trung binh cong so ngyen duong 
	
	 
    if (arr[i]>0){
     a+=arr[i]; 
	}
	else 
{
	printf("\n loai bo %d",arr[i]); 
 } 
}
printf(" \n xuat ra tong gia tri nguyen duong cua mang A %d",a);	    
printf(" \n xuat ra trung binh cong gia tri nguyen duong cua mang A %d",a/n);

int b;   // khai bao bien b 
    for(int i = 0;i < n; ++i){  // tinh tong va trung binh cong so ngyen duong 
	
	 
    if (arr[i]<0){
     b+=arr[i]; 
	}
	else 
{
	printf("\n loai bo %d",arr[i]); 
 } 
}
printf(" \n xuat ra tong gia tri nguyen am cua mang A %d",b);	    
printf(" \n xuat ra trung binh cong gia tri nguyen am cua mang A %d",b/n);


int min = arr[0];  // khai bao min  
    for (int i = 1; i < n; i++){  // tim min cua mang A 
	
        if (min > arr[i])
            
           min=arr[i]; 
		else 
		printf("\n loai bo "); 
	}
	 printf("\n xuat gia tri nho nhat %d",min);
	 
	 
int max = arr[0];  // khai bao max  
    for (int i = 1; i < n; i++){  // tim max cua mang A 
	
        if (max< arr[i])
            
           max=arr[i]; 
		else 
		printf("\n loai bo "); 
	}
	 printf("\n xuat gia tri lon nhat %d",max);
	 
	int min1 = min = arr[0];  // khai bao bien min1 
	 
for (int i=1; i < n; i++)    // tim gia tri nho thu 2 
{
  if (arr[i] < min)
  {
    min1 = min;
    min = arr[i];
  }
  else if (arr[i] < min1)
   min1 = arr[i];
}
if (min1 == min){

   printf("\n khong co gia tri nho thu 2");}
else 
{
printf(" \n gia tri nho thu 2 là %d", min1);}


int max1 = max = arr[0];   // khai bao bien max1  
	 
for (int i=1; i < n; i++)  // tim gia tri lon thu 2  
{
  if (arr[i] > max )
  {
    max1 = max;
    max = arr[i];
  }
  else if (arr[i] > max1)
   max1 = arr[i];
}
if (max1 == max){
   printf("\n khong co gia tri lon thu 2");}
else 
{
printf(" \n gia tri lon thu 2 là %d", max1);}
}


