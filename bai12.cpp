#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int N,tong=0;
	do{
		printf("Nhap N:");
		scanf("%d",&N);
	}while(N<=0||N>=200);
	if(N==1){
		printf("Khong co so nguyen to nao.");
	}
	else if(N>=2){ 
		tong+=2;
	    printf("Cac so nguyen to la\n2 ");
	    for(int i=3;i<=N;i+=2){
	    	bool kt=1;
	    	for(int t=3;t<sqrt(i);t++){
	    		if(i%t==0){
	    			kt=0;
	    			break;
	    		}
	    	}
	    	if(kt) {
	    		printf("%d ",i);
	    		tong+=i;
	    	}
	    }

    }
    printf("\nTong cac so nguyen to: %d",tong);
    getch();
    return 0;
}