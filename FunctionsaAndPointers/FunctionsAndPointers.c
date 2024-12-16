// library functions

// #include<stdio.h>
// #include<math.h>
// void main(){
//     // int n,sqrRoot;
//     // printf("enter a number:- ");
//     // scanf("%d",&n);
//     // sqrRoot=sqrt(n);
//     // printf("square root is:- %d",sqrRoot);
//     int q = pow(2,6); // 2^6;
//     printf("%d",q);
// }



// function prototype

// #include<stdio.h>
// void main(){
//     void fun();  // with this statement before calling a function the order in which the function is declared either below or above main function does not matter
//     fun();
// }
// void fun(){
//     printf("Hello");
// }



// Question 
// combination and permutation function
// nCr = n!/r!*(n-r)!

// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=x;i>=1;i--){
//         fact = fact*i;
//     }
//     return fact;
// }
// void main(){
//     int n,r;
//     printf("enter n:- ");
//     scanf("%d",&n);
//     printf("enter r:- ");
//     scanf("%d",&r);
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     printf("%d",ncr);
// }



// Question
// pascal triangle

// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=x;i>=1;i--){
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// void main(){
//     int n,r;
//     printf("enter n:- ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             int icj = combination(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }
// }



// Question 
// swap to numbers without using third variable

// #include<stdio.h>
// void main(){
//     int a,b;
//     printf("enter two numbers:- ");
//     scanf("%d %d",&a,&b);
//     printf("value before swapping:-\na-->%d\nb-->%d",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("value after swapping:-\na-->%d\nb-->%d",a,b);
// }



// pass by value

// #include<stdio.h>
// void swap(int a, int b){
//     int temp = a;
//     a= b;
//     b= temp;
// }
// void main(){
//     int a,b;
//     printf("enter the value of a ");
//     scanf("%d",&a);
//     printf("enter the value of b ");
//     scanf("%d",&b);
//     swap(a,b);   // pass by value a aur b variables ki jo value h vo isme jayegi (for eg 2,9) aur vo function ke a,b variable me jaake store hogi aur function ke a aur b variable change honge na ki main function ke a aur b variable in techincal terms a,b in swap(a,b) are formal parameters whie 2,9 are the actual parameters
//     printf("value of a is %d\n",a);
//     printf("value of b is %d\n",b);
// }



// Pointers

// #include<stdio.h>
// void main(){
//     // int a=5;
//     // int* x=&a;  // int* to store the adress
//     // printf("%p\n",&a);   //%p address print krne ke liye hota h
//     // return 0;

//     int a=25;
//     int* x=&a;
//     *x = 7;             // *x ka matlab hota h ki x ke andr jis variable ka adress h uski value ko point kro
//     printf("%p\n",x);   // address of a
//     printf("%p\n",&x);  // address of x
//     printf("%p\n",*x);  // x ke andar jis variable ka adress h aur uske jo value h use print krega
//     printf("%d\n",a);
// }



// pass by reference

// #include<stdio.h>
// void swap(int* x,int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void main(){
//     int a=2;
//     int b=9;
//     swap(&a,&b);
//     printf("The value of a is %d\n",a);
//     printf("The value of b is %d\n",b);
// }



// Double pointers

// #include<stdio.h>
// void main(){
//     int a=25;
//     int* x=&a;     // int* --> int ka address store krta h
//     int** y=&x;    // int** --> int* ka address store krta h
//     printf("%d\n",a);
//     printf("%d\n",*x);
//     printf("%d\n",**y);
// }



// Question
// write a function to find the hcf of given functions

// #include<stdio.h>
// int min(int a ,int b){
//     if(a<b) return a;
//     else return b;
// }
// int gcd(int a,int b){
//     int hcf;
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0){
//             hcf = i;
//             break;
//         }
//     }
//     return hcf;
// }
// void main(){
//     int a,b;
//     printf("enter 1st number:- ");
//     scanf("%d",&a);
//     printf("enter 2nd number:- ");
//     scanf("%d",&b);
//     int hcf=gcd(a,b);
//     printf("The HCF/GCD of %d and %d is %d",a,b,hcf);
// }