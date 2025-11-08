#include <stdio.h>
int isPrime(int n){
    for(int x = 2;x<=n/2;x++){
        if(n%x == 0)
        return 0;
}
return 1;
}
int main ()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
     
    if(isPrime(n))
    printf("prime number");
    else
    printf("not prime number");
    printf("\n");
    return 0;
}





    
