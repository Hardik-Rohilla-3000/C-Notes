// #include<stdio.h>
// void main(){
//     int arr[5] = {2,4,6,8,1};  // declaration and intialization of an array
//     arr[4] = 100;  // {2,4,6,8,100}
//     arr[1] = 1;    // {2,1,6,8,100}
// }



// #include<stdio.h>
// void main(){
//     int arr[5] = {2,4,6,8,1};
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include<stdio.h>
// void main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         printf("Enter element number %d ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }



// Question the array in the reverse order 

// #include<stdio.h>
// void main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         printf("enter the element number %d:- ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=4;i>=0;i--){
//         printf("%d ",arr[i-1]);
//     }
// }



// Question
// given an array of marks of 10 students if the marks of any student is less than 35 print its roll number here roll number refers to the index of the array

// #include<stdio.h>
// void main(){
//     int marks[10];
//     for(int i=0;i<10;i++){
//         printf("enter the marks of roll number %d:- ",i);
//         scanf("%d",&marks[i]);
//     }
//     for(int i=0;i<10;i++){
//         if(marks[i]<35){
//             printf("Roll number %d has marks less than 35\n",i);
//         }
//     }
// }



// memory allocation in arrays
// #include<stdio.h>
// void main(){
//     int arr[5] = {1,2,3,4,5};
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
//     printf("%p\n",&arr[0]);
// }



// Question 
// calculate the sum of all elements in the given array

// #include<stdio.h>
// void main(){
//     int sum=0;
//     int arr[5] = {1,3,5,7,10};
//     for(int i=0;i<5;i++){
//         sum+=arr[i];
//     }
//     printf("%d",sum);
// }



// Question
// Find the maximum value out of all the elements in the array

// #include<stdio.h>
// void main(){
//     int arr[7] = {1,4,2,8,19,5,12};
//     int max=arr[0];
//     for(int i=0;i<7;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("maximum value:- %d",max);
// }
// #include<stdio.h>
// #include<limits.h>
// void main(){
//     int arr[7] = {1,4,2,8,19,5,12};
//     int max=INT_MIN;     // min int value that can one int variable store
//     for(int i=0;i<7;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("maximum value:- %d",max);
// }



// array pass by value or reference

// #include<stdio.h>
// void fun(int a[]){
//     a[0] = 100;
// }
// void main(){
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);               // pass by reference
//     printf("%d\n",arr[0]);
// }



// Question
// given an array of integers change the value of all odd indexed elements to its second element and increment all even indexed value by 10

// #include<stdio.h>
// void main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     for(int i=0;i<8;i++){
//         if(i%2==0){
//             arr[i]+=10;
//         }
//         else{
//             arr[i]*=2;
//         }
//     }
//     for(int i=0;i<8;i++){
//         printf("%d ",arr[i]);
//     }
// }



// Question 
// find the difference between the sum of elements at even indices to sum of elements at odd indices

// #include<stdio.h>
// void main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int sumOdd=0,sumEven=0,difference=0;
//     for(int i=0;i<7;i++){
//         if(i%2==0){
//             sumEven+=arr[i];
//         }
//         else{
//             sumOdd+=arr[i];
//         }
//     }
//     difference=sumEven-sumOdd;
//     printf("%d",difference);
// }



// Question
// find the total number of pairs in the array whose sum is equal to the given value x

// #include<stdio.h>
// void main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int x=12,count=0;
//     for(int i=0;i<8;i++){
//         for(int j=i+1;j<8;j++){
//             if(arr[i]+arr[j]==x){
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
// }



// Question 
// find the second largest element in the given array

// #include<stdio.h>
// #include<limits.h>
// void main(){
//     int arr[7] = {1,4,2,8,19,5,12};
//     int max=INT_MIN;     // min int value that can one int variable store
//     int smax=INT_MIN;
//     for(int i=0;i<7;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     // max -4
//     for(int i=0;i<7;i++){
//         if(arr[i]!=max && smax<arr[i]){
//             smax=arr[i];
//         }
//     }   
//     printf("second maximum value:- %d",smax);
// }



// Question 
// wap to copy the contents of one array into another in the reverse order

#include<stdio.h>
void main(){
    int arr[7] ={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<7;i++){
        brr[i] = arr[6-i];
    }
    for(int i=0;i<7;i++){
        printf("%d ",brr[i]);
    }
}