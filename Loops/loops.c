// Question
// print all numbers from 1 to 100

// #include<stdio.h>
// void main(){
//     for(int i = 1; i<=100; i++){
//         printf("%d ",i);
//     }
// }



// Question
// print all even numbers from 1 to 100

// #include<stdio.h>
// void main(){
//     for(int i = 1;i<=100;i++){
//         if(i%2 == 0){
//             printf("%d ",i);
//         }
//     }
// }



// Question
// print all odd numbers from 1 to 100

// #include<stdio.h>
// void main(){
//     for(int i=1; i<=100; i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
// }



// Question
// print the table of 19

// #include<stdio.h>
// void main(){
//     for(int i=1;i<=10;i++){
//         printf("%d * %d = %d\n",19,i,19*i);
//     }
// }


// Question
// print table of n take n input from the user

// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
// }



// Question
// print the AP up to n (a+(n-1)d) numbers
// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=(2*n)-1;i+=2){
//         printf("%d ",i);
//     }
// }



// Question 
// display this ap 4,7,10,13,16..... up to n numbers

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=4;i<=(3*n)+1;i+=3){
//         printf("%d ",i);
//     }
// }



// Now without using mathematical formula

// #include<stdio.h>
// void main(){
//     int n,a=4;
//     printf("Enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a+=3;
//     }
// }



// Question 
// display this gp 1,2,4,8,16,32 up to n 

// #include<stdio.h>
// void main(){
//     int n,a=1;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a*=2;
//     }
// }



// Question
// display this ap 100,97,94,91..... up to all numbers are positive

// #include<stdio.h>
// void main(){
//     for(int i=100;i>=0;i-=3){
//         printf("%d ",i);
//     }
// }



// Question
// wap to check if a number is prime or not 

// #include<stdio.h>
// void main(){
//     int n,count=0;
//     printf("Enter your number:- ");
//     scanf("%d",&n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             count=1;
//             break;
//         }
//     }
//     if(n==1){
//         printf("1 is neither prime nor composite");
//     }
//     else if (count==0){
//         printf("Number is prime");
//     }
//     else{
//         printf("Number is composite");
//     }
// }



// Question 
// print all odd numbers from 1 to 100 using continue

// #include<stdio.h>
// void main(){
//     for(int i=1;i<=100;i++){  
//         if(i%2==0){
//             continue;
//         }
//         printf("%d ",i);
//     }
// }



// Question
// wap to count digits of a given number

// #include<stdio.h>
// void main(){
//     int n,count = 0;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     while(n!=0){
//         n/=10;
//         count++;
//     }
//     printf("The no of digits are:- %d",count);
// }



// Question
// wap to print sum of digits of a given number

// #include<stdio.h>
// void main(){
//     int n,sum=0;
//     printf("enter a number:- ");
//     scanf("%d",&n);
//     while(n!=0){
//         sum = sum+n%10;
//         n/=10;
//     }
//     printf("sum of digits:- %d",sum);
// }



// Question
// wap to print sum of even digit of a given number

// #include<stdio.h>
// void main(){
//     int num,sum=0,lastDigit;
//     printf("enter the number:- ");
//     scanf("%d",&num);
//     while(num!=0){
//         lastDigit = num%10;
//         if(lastDigit%2==0){
//             sum = sum+lastDigit;
//         }
//         num/=10;
//     }
//     printf("sum of all even digits of a number:- %d",sum);
// }



// Question
// wap to print the reverse of a number
// #include<stdio.h>
// void main(){
//     int num,reverseNum=0,lastDigit;
//     printf("enter your number:- ");
//     scanf("%d",&num);
//     while(num!=0){
//         lastDigit = num%10;
//         reverseNum = (reverseNum*10)+lastDigit;
//         num/=10;
//     }
//     printf("%d",reverseNum);
// }   



// Question 
// wap to print the sum of the given number and its reverse

// #include<stdio.h>
// void main(){
//     int num,reverseNum=0,lastDigit,copyNum;
//     printf("enter your number:- ");
//     scanf("%d",&num);
//     copyNum=num;
//     while(num!=0){
//         lastDigit=num%10;
//         reverseNum = (reverseNum*10)+lastDigit;
//         num/=10;
//     }
//     printf("sum of your number and its reverse is:- %d",copyNum+reverseNum);
// }



// Question
// wap to print the sum of this series 1-2+3-4+5-6.... up to n

// #include<stdio.h>
// void main(){
//     int n,sum=0;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//         else{
//             sum-=i;
//         }
//     }
//     printf("sum of the series:- %d",sum);
// }

// #include<stdio.h>
// void main(){
//     int n,sum;
//     printf("enter the number:- ");
//     scanf("%d",&n);
//     if(n%2==0){
//         sum = -n/2;
//     }
//     else{
//         sum = -(n/2)+n;
//     }
//     printf("sum of the series:- %d",sum);
// }



// Question
// print the factorial of a given number

// #include<stdio.h>
// void main(){
//     int n, factorial=1;
//     printf("Enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     printf("factorial of %d is %d",n,factorial);
// }



// Question 
// print the factorial up to n numbers

// #include<stdio.h>
// void main(){
//     int n, factorial=1;
//     printf("Enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//         printf("%d\n",factorial);
//     }
// }



// Question
// print the nth fibonacci number

// #include<stdio.h>
// void main(){
//     int n,a=1,b=1,sum=0;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         a=b;
//         b=sum;
//         sum=a+b;
//     }
//     printf("%d\n",sum);
// }



// Question 
// print the first n fibonacci numbers

// #include<stdio.h>
// void main(){
//     int n,a=1,b=1,sum=0;
//     printf("enter your number:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         a=b;
//         b=sum;
//         sum=a+b;
//         printf("%d\n",sum);
//     }
// }



// Question
// two numbers are entered through the keyboard wap to find the value of one number raised to the power of another number

// #include<stdio.h>
// void main(){
//     int a,b,result=1;
//     printf("enter the number:- ");
//     scanf("%d",&a);
//     printf("enter the power:- ");
//     scanf("%d",&b);
//     for(int i=1;i<=b;i++){
//         result = result*a;
//     }
//     printf("%d",result);
// }           



// typecasting
// #include<stdio.h>
// void main(){
//     // int x=65;
//     // printf("%d\n",x);
//     // char ch=(char)x;
//     // printf("%c\n",ch);

//     // char ch='A';
//     // printf("%c\n",ch);
//     // int x=(int)ch;
//     // printf("%d\n",x);
// }




// Question
// wap to print the ascii values of all 26 alphabetical characters using while loop (capital case)

// #include<stdio.h>
// void main(){
//     int i=65;
//     while(i<=90){
//         printf("%c ---> %d\n",(char)i,i);
//         i++;
//     }
// }



// Question
// wap to print out all armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. for example 153

