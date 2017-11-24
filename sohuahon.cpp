#include <stdio.h>
#include <conio.h>
#define MAX 999999
int a[MAX][1];
int main(){
	int x;
	do{
		scanf("%d",&x);
	}while(x<=0);
    for(int i=1;i<=x;i++){
    	int ti=0;
    	for(int t=1;t<i;t++){
    		if(i%t==0) ti+=t;
    	}
    	a[i][0]=ti-1;
    }
    for(int i=1;i<x;i++){
    	for(int t=i;t<x;t++){
    		if(a[i][0]==t&&a[t][0]==i){
    			printf("%d, %d\n",i,t);
    			break;
    		} 
    	}
    }
    system("pause");
	return 0;
}
