#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{

float epsilon,pix=0;
int i=0;
do{
	printf("Nhap epsilon:");
	scanf("%f",&epsilon);
}while(epsilon<=0||epsilon>=1);
while(1.0/(2*i+1)>=epsilon){
	pix+=pow(-1,i)*1.0/(2*i+1);
	i++;
}
printf("Gia tri cua pi la:%.2f\n",pix*4);
getch();
return 0;
}