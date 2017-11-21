#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
int a[10],N,soluong=0;
bool kt;
do{
	printf("Nhap so N:");
	scanf("%d",&N);
}while(N<=0||N>=10);
printf("Nhap mang....\n");
for(int i=0;i<N;i++){
	scanf("%d",&a[i]);
}
system("cls");
printf("Mang vua nhap la: ");
for(int i=0;i<N;i++){
	kt=1;
	printf("%d ",a[i]);
    if(a[i]==2) soluong++;
    if(a[i]<2||a[i]%2==0)
    continue;
    for(int t=3;t<=sqrt(a[i]);t+=2){
    	if(a[i]%t==0) kt=0;
    }
    if(kt) soluong++;
}
printf("\nSo luong so nguyen to:%d\n",soluong);
getch();
return 0;
}