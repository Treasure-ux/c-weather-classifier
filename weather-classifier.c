#include<stdio.h>
#include<stdlib.h>

int main(){
    int temp;
    printf("Type in the temperature in celsius\n");
    scanf("%d", &temp);

    if(temp<20){
       printf("The weather is cold, don't forget to take your overalls when going out.");
       }else if(temp>30){
        printf("The weather is hot, wear light clothings and avoid exposure to sunlight.");
       }else{
       printf("The weather is normal, enjoy yourself.");
       }
return 0;
}
