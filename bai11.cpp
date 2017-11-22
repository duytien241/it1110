#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
int N,tong=0;
int arr[]={6,28,496};
do{
	printf("Nhap N:");
	scanf("%d",&N);
}while(N<=0||N>=1000);
// for(int i=2;i<=N;i++){
// 	int ti=0;
// 	for(int t=1;t<=i/2;t++){
// 		if(i%t==0) ti+=t;
// 		if(ti>i) break;
// 	}
// 	if(ti==i) {
// 		printf("%d ",i);
// 		tong+=i;
// 	}
// }
	if(N>496) tong =530; //in ra
	else if(N>28) tong=34; //in ra
	else if(N>6) tong =6; //in ra
printf("\nTong cac so hoan thien:%d\n",tong);
getch();
return 0;
}