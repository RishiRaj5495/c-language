#include<stdio.h>
int sum(int n);
void fibonacci(int n,int a,int b); 
int sum(int m){ 

 if(m == 1)
 return 1;
    return m * sum(m-1);
}
void fibonacci(int n,int a,int b){
    if (n == 0){
    printf("%d",0) ;
    return;}
    else if (n == 1){
        printf("%d\t%d",0,1);
        return;}
        else{
         printf("%d\t%d",0,1);}
    
    
    
    
    
   
if (n == 0)
return;


    int c = a + b;
 
 
   
 printf("%d\t",c); 
    
fibonacci(n-1,b,c);


}



int main(){
    int user;
    printf("Enetr the number\n");
    scanf("%d",&user);
    printf(" Sum of 1 to %d digit = %d\n\n",user,sum(user));
    fibonacci(user,0,1);

}


