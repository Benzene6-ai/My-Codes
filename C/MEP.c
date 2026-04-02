#include <stdio.h>
#include <stdbool.h>

bool isEven(int x){
    return x%2==0;
}

int main(){
    for(int i =0;i<=10;i++){
        if(isEven(i)){
            printf("%d\n",i);
        }
    }
    if(isEven(3)){
      printf("Even number");
    }
    else{
        printf("Odd number");
    }
    
    printf("Hello\n");
    printf("Mike\n");
    int age = 25;
    int year =  2025;
    int items = 3;
    float gpa = 2.5;
    printf("You are %d years old\n",  age);
    printf("the year is %d\n", year);
    printf("You have ordered %d items\n", items);
    printf("Your gpa is %.1f\n",gpa);


    return 0;
}