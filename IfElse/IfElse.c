// Question
// find out if number is divisible by 5 or not

// #include<stdio.h>
// void main(){
//     int num;
//     scanf("%d",&num);
//     if(num%5 == 0){
//         printf("Divisible by 5");
//     }
//     else{
//         printf("Not divisible by 5");
//     }
// }



// Question
// take integer input and print absolute value of integer

// #include<stdio.h>
// void main(){
//     int n;
//     scanf("%d",&n);
//     if(n>0){
//         printf("%d",n);
//     }
//     else{
//         printf("%d",-n);
//     }
// }



// Question
// wap to calculate the profit or loss if cp and sp is entered by the user
// #include<stdio.h>
// void main(){
//     int sellingPrice,costPrice;
//     printf("Enter selling price:- ");
//     scanf("%d",&sellingPrice);
//     printf("Enter cost price:- ");
//     scanf("%d",&costPrice);
//     if(sellingPrice>costPrice){
//         printf("Your profit is:- %d",sellingPrice-costPrice);
//     }
//     else{
//         printf("Your loss is:- %d",costPrice-sellingPrice);
//     }
// }



// Question
// given the length and breadth of the rectangle wap to find out whether the area is greater than the perimeter of the rectangle

// #include<stdio.h>
// void main(){
//     int l = 7,b = 3,area,perimeter;
//     area = l*b;
//     perimeter = 2*(l+b);
//     if(area>perimeter){
//         printf("Area is greater than perimeter");
//     }
//     else{
//         printf("Perimeter is greater than area");
//     }
// }



// Question
// wap to find out whether a number is a three digit number or not

// #include<stdio.h>
// void main(){
//     int n;
//     scanf("%d",&n);
//     if(n>99 && n<1000){
//         printf("It is a 3 digit number");
//     }
//     else{
//         printf("it is not a three digit number");
//     }
// }



// Question
// take a positive integer input and tell if is divisible by 5 and 3

// #include<stdio.h>
// void main(){
//     int n ;
//     scanf("%d",&n);
//     if(n%5==0 && n%3==0){
//         printf("divisible by 5 and 3");
//     }
//     else{
//         printf("not divisible by 5 and 3");
//     }
// }



// Question
// take 3 +ve integer input and print the greatest of them 

// #include<stdio.h>
// void main(){
//     int a,b,c;
//     printf("Enter three numbers:- ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b){
//         if(a>c){
//             printf("%d is greatest",a);
//         }
//         else{
//             printf("%d is greatest",c);
//         }
//     }
//     else{
//         if(b>c){
//             printf("%d is greatest",b);
//         }
//         else{
//             printf("%d is greatest",c);
//         }
//     }
// }



// Question
// take three numbers input and tell if they can be the side of triangle

// #include<stdio.h>
// void main(){
//     int x,y,z;
//     printf("Enter 3 numbers:- ");
//     scanf("%d %d %d",&x,&y,&z);
//     if((x+y)>z && (y+z)>x && (x+z)>y){
//         printf("They can be the sides of the triangle");
//     }
// }



// Question
// given three points (x1,y1),(x2,y2),(x3,y3) wap to find out if all three points lie on one straight line

// #include<stdio.h>
// void main(){
//     int x1,y1,x2,y2,x3,y3;
//     double m1,m2;
//     printf("enter coordinates of point 1:- ");
//     scanf("%d %d",&x1,&y1);
//     printf("enter coordinates of point 2:- ");
//     scanf("%d %d",&x2,&y2);
//     printf("enter coordinates of point 3:- ");
//     scanf("%d %d",&x3,&y3);
//     m1 = (y2-y1)/(x2-x1);
//     m2 = (y3-y2)/(x3-x2);
//     if(m1==m2){
//         printf("all points are in straight line");
//     }
//     else{
//         printf("points are not in straight line");
//     }
// }



// Question 
// wap to find whether a given point lies on origin or x axis or y axis

// #include<stdio.h>
// void main(){
//     int x,y;
//     printf("Enter the coordinates:- ");
//     scanf("%d %d",&x,&y);
//     if(x==0 && y==0){
//         printf("Point lies on origin");
//     }
//     else if(x==0){
//         printf("point lies in y axis");
//     }
//     else if(y==0){
//         printf("point lies in x axis");
//     }
//     else{
//         printf("point neither lies on x nor on y axis");
//     }
// }



