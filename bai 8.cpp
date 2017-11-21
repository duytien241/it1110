#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	//bai 8
	 int a[10],N,d=0;
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
	printf("%d ",a[i] );
	int ti=0;
	for(int t=1;t<a[i];t++){
		if(a[i]%t==0) ti+=t;
	}
	if(ti==a[i]&&a[i]>1) d++;
}
printf("\nSo so hoan thien la: %d\n",d);
getch();
return 0;
}