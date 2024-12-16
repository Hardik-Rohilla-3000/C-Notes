// address of character array element

// #include<stdio.h>
// void main(){
//     char arr[4] = {'a','t','l','a'};
//     printf("%p\n",arr[0]);
//     printf("%p\n",arr[1]);
//     printf("%p\n",arr[2]);
//     printf("%p\n",arr[3]);
// }



// '0'--> 48;
// '9'--> 57;



// print character array with null character

// #include<stdio.h>
// void main(){
//     // (null character)'\0' --> 0 ascii value 
//     // printf("%d",'\0');
//     char arr[] = {'H','e','l','l','o','\0'};
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
// }



// String intialization without individual characters

// #include<stdio.h>
// void main(){
//     char arr[] = "College Wallah";
//     int i=0;
//     while(arr[i]!='\0'){    // computer automatically \0 string ke last me laga deta h par individual character ki array me nhi
//         printf("%c",arr[i]);
//         i++;
//     }
//     // size of string will be (string size)+1
//     // char str[13] = "PhysicsWallah"; // this will give an error
// }



// Ways of printing particular element

// arr[i]
// *(arr + i);
// *(i+arr);
// i[arr]



// puts() method

// #include<stdio.h>
// void main(){
//     char str[] = "College wallah is best";
//     puts(str);  // prints the string
// }

// output of string without loop
// #include<stdio.h>
// void main(){
//     char str[]= "College wallah is best";
//     printf("%s",str);
// }



// input of string without loop

// #include<stdio.h>
// void main(){
//     char str[40];
//     // scanf("%s",str);   // only the first word will be considered
//     // gets(str);   // take input of the entire string
//     scanf("%[^\n]s",str);  // take input of the entire string
//     printf("Your input was:- %s",str);
// }