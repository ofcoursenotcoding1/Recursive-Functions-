#include <stdio.h>
int fibo(int);     // Function Declaration
int main(){
    int num, i;
    printf("Enter the number of terms ");
    scanf("%d\n", &num);
    printf("The fibonacci series of the given term is ");
    for(i=0; i < num; i++){
        printf("%d", fibo(i));        //Function call inside the loop to print the series
    }
    return 0;

}
int fibo(int num){      // Function Definition
    if(num == 0){
        return 0;
    }
    else if(num == 1){
        return 1;

    }
    else{
        return(fibo(num-1)+ fibo(num-2));     // Recursive function 
    }
}