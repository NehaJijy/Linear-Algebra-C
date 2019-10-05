#include<stdio.h>
void main(){
int n,m,i,j,a[20][20];
printf("Enter number of rows: ");
scanf("%d",&m);
printf("Enter number of columns: ");
scanf("%d",&n);


for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                a[i][j]=0;}
            printf("%d\t",a[i][j]);
        }printf("\n");

    }
}

