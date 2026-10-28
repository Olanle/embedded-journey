#include <stdio.h> 

int main() {

    int age = 0;
    
    if(age >= 18){
    printf("You are an adult");
    }
    else if(age < 0){
    printf("You haven't been born yet");
    }
    else if(age == 0){
    printf("You are a newborn");
    }
    else{
    printf("You are a child");
    }

    return 0;
}