#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
int a[10],N,tong1=0,sl1=0,tong2=0,sl2=0,tong3=0,sl3=0;
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
	printf("%d ",a[i]);
if(a[i]%2==0){
	tong1+=a[i];
	sl1++;
}
if(a[i]%2!=0){
	tong2+=a[i];
	sl2++;
}
if(a[i]%5==0&&a[i]%10!=0){
	tong3+=a[i];
	sl3++;
}
}
if(sl1==0) printf("Khong co so chan");
else printf("\nTrung binh cong cua cac so chan %.2f",1.0*tong1/sl1);
if(sl2==0) printf("Khong co so le");
else printf("\nTrung binh cong cua cac so le %.2f",1.0*tong2/sl2);
if(sl3==0) printf("\n Khong co so chia het cho 5 nhung khong chia het cho 10");	
else printf("\nTrung binh cong cua cac so chia het cho 5 nhung khong chia het cho 10 la: %.2f\n",1.0*tong3/sl3);
getch();
return 0;
}