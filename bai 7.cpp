#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
int a[10],N,max1,max2;
do{
	printf("Nhap so N:");
	scanf("%d",&N);
}while(N<=0||N>=10);
printf("Nhap mang....\n");
for(int i=0;i<N;i++){
	scanf("%d",&a[i]);
}
system("cls");
max1=a[0];
max2=a[0];
printf("\nMang vua nhap la: ");
for(int i=0;i<N;i++){
	printf("%d ",a[i]);
	if(a[i]>max2){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else max2=a[i];
	}
	else if(max2>=max1) max2=a[i];
}
if(N==1) printf("\nKhong co phan tu nho thu 2");
else printf("\nPhan tu nho thu 2 la: %d\n",max2);


getch();
return 0;
}