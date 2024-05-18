// #include<stdio.h>
// #include<conio.h>

// void main(){

//    int a=1;
//    int b=2; 
//    int c=3;  
   
//    scanf("%d",&a); //135
//    scanf("%d",&b);
//    scanf("%d",&c);

//    a=a+b+c;
//    b=a-b-c;
//    a=a-a+c;
//    c=a-b-c;

//   printf("a=%d b=%d c= %d",a,b,c);

//    getch();
// }  

#include<stdio.h>
#include<conio.h>

void main(){

   int a;
   int b; 
   int c;  
   
   scanf("%d",&a); //135
   scanf("%d",&b);
   scanf("%d",&c);

   a=c+b;
   b=b/b;
   c=a-b;

   
   
   printf("a=%d b=%d c= %d",a,b,c);

   getch();
}  