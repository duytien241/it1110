#include <stdio.h>
#include <conio.h>
#define MAX 99999999
long a[MAX][1];
int main(){
	int x;
	do{
		scanf("%d",&x);
	}while(x<=0);
    for(int i=1;i<=x;i++){
    	int tiendz=0; // :))
    	for(int t=1;t<i;t++){
    		if(i%t==0) tiendz+=t;
    	}
    	a[i][0]=tiendz-1;
        if(tiendz<i&&i==a[tiendz-1][0]) printf("%d,%d\n",tiendz-1,i);
    }
    getch();
	return 0;
}