// #include<stdio.h>
// void main(){
//     for(int i=1;i<=4;i++){  // outer loop -> for no of lines
//         for(int i=1;i<=5;i++){ // inner loop -> for no of stars in each line
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// Print the star square

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the side of the square:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){ // no of rows
//         for(int i=1;i<=n;i++){ // no of columns
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



// print the number square pattern

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the no of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){  // for no of rows
//         for(int i=1;i<=n;i++){  // for no of columns
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }



// star triangle

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the no of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){  // for no of rows
//         for(int j=1;j<=i;j++){  // for no of columns
//             printf("* ",i);
//         }
//         printf("\n");
//     }
// }



// reverse star triangle

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// for any patterns
// 1. no of lines
// 2. what is happening in each line



// number triangle

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }



// number traingle reverse

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }



// odd number triangle

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a+=2;
//         }
//         printf("\n");
//     }
// }



// alphabet square

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the no of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){  // for no of rows
//         int a=(int)'A';
//         for(int i=1;i<=n;i++){  // for no of columns
//             printf("%c ",(char)a);
//             a++;
//         }
//         printf("\n");
//     }
// }



// print the given pattern
// 1
// A B 
// 1 2 3
// A B C D
// 1 2 3 4 5

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int ch=(int)'A';
//         for(int j=1;j<=i;j++){
//             if(i%2!=0){
//                 printf("%d ",j);
//             }
//             else{
//                 printf("%c ",(char)ch);
//                 ch++;
//             }
//         }
//         printf("\n");
//     }
// }



// star plus

// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the number of rows:- ");
//     scanf("%d",&n);  
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j==(n/2)+1 && i!=(n/2)+1){
//                 printf("* ");
//             }
//             else{
//                 if(i!=(n/2)+1){
//                     printf("  ");
//                 }
//             }
//             if(i==(n/2)+1){
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// }