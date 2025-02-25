#include<stdio.h>

void main(){

    int enteredMarks;
    printf("Please enter your marks: ");
    scanf("%d",&enteredMarks);

    if(enteredMarks <= 100 && enteredMarks >= 90){
        printf("Ex");
    }else if(enteredMarks < 90 && enteredMarks >= 80){
        printf("A");
    }else if(enteredMarks < 80 && enteredMarks >= 70){
        printf("B");
    }else if(enteredMarks < 70 && enteredMarks >= 60){
        printf("C");
    }else if(enteredMarks < 60 && enteredMarks >= 0){
        printf("F");
    }else{
        printf("Please entered correct marks...");
    }
}