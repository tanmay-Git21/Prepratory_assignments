#include<stdio.h>

int result = 1;
int findFact(int input){

   if(input == 1){
    result *= input;
    printf("%d",result); 
   }
   result *= input; 
   input--;
   findFact(input);
}




int main(){
    int input;
    printf("Enter a number : ");
    scanf("%d",&input);
    findFact(input);

}