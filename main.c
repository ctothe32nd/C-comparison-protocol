#include <stdio.h>
#include <string.h>
#include <windows.h>


int main(){
    //Initialize strings called mystr and mystr2

    char mystr[100000];

    //Ask for string 1 to compare
    printf("First Value:\n");

    //Save first string
    scanf("%s", mystr);

    char mystr2[100000];

    //Ask for string 2 to compare
    printf("Second Value:\n");

    //Save first string
    scanf("%s", mystr2);

    //Compare the strings, %d shows the answer is a number
    printf("%d", strcmp(mystr, mystr2));

    Sleep(10000);//10000 milliseconds, 10 seconds
    
    return 0;
}
