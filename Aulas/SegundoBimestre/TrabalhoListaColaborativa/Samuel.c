#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int f0=0;
    int f1=0;
    int f2=0;
    int f3=0;
    scanf("%d",&n);
    if (n<=2){
        f3=8;
    }
    else{
        f1 = pow((n-2),2)*6;
        f2 = (n-2)*12;
        f3=8;
        f0 = pow(n,3)-(f1+f2+f3);
    }
    printf("%d\n \n%d \n%d \n%d",f0,f1,f2,f3);

    return 0;
}
