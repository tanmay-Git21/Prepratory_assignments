#include<stdio.h>
#include<string.h>

int main(){
    //Take input for the stiring
    char myString[100];
    
    printf("Please enter the string: ");
    // fgets(myString,sizeof(myString),stdin);
    scanf("%s",myString);
    printf("The reverse of your string is: ");
    for(int i = strlen(myString)-1 ; i>=0 ; i--){
        printf("%c",myString[i]);
    }
}