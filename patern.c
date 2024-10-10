#include<stdio.h>
int main(){
for(int i = 1 ; i <=5 ; i++){
    for(int j = 1 ; j <= 5-i ; j++){
        printf(" ");}
        for(int m = 1 ; m <= 2*i - 1 ; m++){
            printf("*");
            
        }

        printf("\n");
}

printf("\n\n\n\n");


for (int i = 1; i <= 4; i++)
{
   for (int j = 1; j <= 5 - i ; j++)
   {
    printf("*");
   }
   for (int m = 1; m <= 2*i-2; m++)
   {
if (i == 1)
break;
printf(" ");
   }
   for (int n = 1; n <= 5 - i; n++)
   {
    /* code */
    printf("*");
   }
   printf("\n");
   
   


}







}