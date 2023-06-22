#include<stdio.h>
int main()
{
    int a,b;
 
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greater\n",a);
    }
    else{
        printf("%d is greater\n",b);
    }
    return 0;
}
#include<stdio.h>
int main(void)
{
    int a,b,max;
    printf("Enter values for a and b : ");
    scanf("%d%d", &a, &b);
    max = a>b ? a : b;
    printf("Larger of %d and %d is %d \n", a, b, max);
    return 0;
}