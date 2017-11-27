#include <stdio.h>
#include <conio.h>
#define MAX 99999999
long a[MAX];
int main(){
    int x;
    int s=0;
    do{
        printf("Nhap x:");
        scanf("%d",&x);
    }while(x<=0);
     for(int i=1;i<=x;i++){
        int tiendz=0; // :))
        for(int t=1;t<i;t++){
            if(i%t==0) tiendz+=t;
        }
        a[i]=tiendz-1;
        if(tiendz<i&&i==a[tiendz-1]) {
            if(s==0) printf("Cac so hua hon la:\n");
            s++;
            printf("%d,%d\n",tiendz-1,i);
        }
    }
    if(s==0) printf("Khong co so nao.");
    else printf("Co tat ca %d so hua hon.",s);
    getch();
    return 0;
}
