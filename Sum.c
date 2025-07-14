#include <stdio.h>
int add(int);    // Function declaration
int main(){ 
    int sum;
    int num;
    printf("Enter a number "); 
    scanf("%d\n", &num); 
    sum = add(num);    // Function call 
    printf("The sum of the given natural number is %d", sum);  //Executed after completion of recursive function
    return 0;

}
int add(int num){        // Function definition
    if(num<=0){
        return 0;

    }
    else{
        return(num + sum(num-1));   // Recursive function 
    }
}