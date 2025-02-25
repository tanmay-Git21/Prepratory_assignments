#include<stdio.h>
#include<stdlib.h>

int main(){
    int LIMIT = 100;
    int inputLimit;
    int numToTake;
    int greatestNumber = 0;
    printf("Hello how many nums do you want to input");
    scanf("%d",&inputLimit);
    if(inputLimit > 100){
        printf("Sorry too much to process");
    }
    int *arr = (int*)  calloc(inputLimit,inputLimit * sizeof(int));
    for(int i = 0; i< inputLimit ; i++){
        
        scanf("%d",&numToTake);
        if(greatestNumber < numToTake){
            greatestNumber = numToTake;
        }
        arr[i] = numToTake;
    }
    printf("The largest Number in you input is %d",greatestNumber);

}