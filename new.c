#include<stdio.h>
int main()
{
    int a[7],sum=0,i;


for(i=0;i<7;i++){
    scanf("%d", &a[i]);
}
for(i=0;i<7;i++){

    sum=sum+a[i];
}

printf("%d",sum);
return 0;

    


}