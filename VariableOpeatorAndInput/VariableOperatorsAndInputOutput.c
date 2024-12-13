// int and int arithmetic opeartion result will be int
// to get float as a result make either all the operands float or any one of them



// Quesiton 
// Volume of a sphere
// #include<stdio.h>

// void main(){
//     int r = 5;
//     float v = 4*3.14*r*r*r/3;
//     printf("Volume Of A Sphere:- %f",v);
// }



// Question
// area of a circle of given circle
// #include<stdio.h>
// void main(){
//     int r = 5;
//     float a = 3.14*r*r;
//     printf("Area Of A Circle:- %f",a);
// }



// Question
// calculate percentage of 5 subjects
// #include<stdio.h>
// void main(){

// float x1 = 98;
// float x2 = 75;
// float x3 = 45;
// float x4 = 70;
// float x5 = 90;
// float percent = (x1 + x2 + x3 + x4 + x5)/5;
// printf("Percentage:- %f",percent);
// }



// Question
// calculate percentage of 4 subjects where marks is out of 40
// #include<stdio.h>
// void main(){
//     float x1 = 20;
//     float x2 = 10;
//     float x3 = 35;
//     float x4 = 40;
//     float percentage = (x1+x2+x3+x4)*100/160;
//     printf("Percentage:- %f",percentage);
// }



// Question
// calculate simple interest
// #include<stdio.h>
// void main(){
//     float p = 100;
//     float r = 10;
//     float t = 2;
//     float si = p*r*t/100;
//     printf("Simple Interest:- %f",si);
// }



// Question
// sum of two given numbers 
// #include<stdio.h>
// void main(){
//     int num1,num2;
//     printf("Enter the first number:- ");
//     scanf("%d",&num1);
//     printf("Enter the second number:- ");
//     scanf("%d",&num2);
//     printf("Sum of your two numbers:- %d",num1+num2);
// }



// Question
// take two integer input a and b : a>b, and find the remainder when a is divided by b
// #include<stdio.h>
// void main(){
//     int a,b,q,r;
//     printf("Enter first number:- ");
//     scanf("%d",&a);
//     printf("Enter second number:- ");
//     scanf("%d",&b);
//     q = a/b;
//     r = a-(q*b);
//     printf("Remainder is:- %d",r);
// }



// **Note**
// a % b = a;   (a<b)



// Question
// Take float(+ve) input and print the fractional part of the real number
// #include<stdio.h>
// void main(){
//     float num;
//     int integer;
//     printf("Enter a positive float number:- ");
//     scanf("%f",&num);
//     integer = num;
//     printf("%f",num-integer);
// }



// A ---> 65 , a ---> 97



// Short and Long data types
// 1 byte ---> 8 bits 
// n bits = 2^n numbers
// short ----> 2 bytes = 16 bits
//             2^16 numbers = 65536(-32768 to 32767)(-2^15 to 2^15-1)
// int ---> 4 bytes = 32 bits
//          2^32 numbers = 4294967296(-2147483648 to 2147483647)(-2^31 to 2^31-1)
// long ---> 8 bytes = 64 bits (-2^63 to 2^63-1)
// char ---> 1 byte = 8 bits (2^8 = 256)