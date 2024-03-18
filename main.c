#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}




int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci Series of %d is: ", n);

    for(int i=0; i<n; i++){
         int result = fibonacci(i);
         printf("%d ", result);
    }



    return 0;
}
























