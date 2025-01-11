#include<stdio.h>
int main(){
  
 int positive,negative;

 
    int arr[] = {93,0,7,15,93,65};
    for(int m = 0 ; m < 8 ; m++){
        positive = 0;
        negative = 0;
          

for(int i = 0 ; i < 8 ; i++){
if(arr[m] - arr[i] == 1) 
    positive = 1 ;

if(arr[m] - arr[i] == -1) 
    negative = -1 ;

                                    }
                                    int a = arr[m]+positive+negative;
if (positive != 1 && negative != -1){
    printf("Missing numberm is %d",a);
     break;}
    
    
                                       }
                            }


                        
 
   

