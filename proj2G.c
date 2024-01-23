#include <stdio.h>
#include <stdlib.h>

/*

    The following code contains errors. Fix the errors so that the code compiles and runs.
    Yes, you could simply attempt to compile the code, but you will learn more if you
    try to fix the errors without compiling first.

    Locate each TODO comment and fix the code below it. Each TODO will require only a single
    code change to correct the mistake.

    To work on each TODO incrementally, you can comment out all of the code in later TODO
    sections so you can focus on the current TODO. Be sure to uncomment the code before
    submitting your work.

    The final output of the program should be:

    Array elements: 1 2 3 4 5 
    Pointer elements: 1 2 3 4 5
    Array elements after modification: 1 2 10 4 5
    Array elements after modification using pointer: 1 2 10 4 20
    Enter your name: Test
    Hello, Test!    

*/

char *get_name(void);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Accessing array elements using the array syntax
    // TODO: Fix this code so that it prints the array elements using array
    // syntax
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Accessing array elements using the pointer syntax
    // TODO: Fix this code so that it prints the array elements using pointer
    // syntax
    printf("Pointer elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr+i);
    }
    printf("\n");

    // Changing array elements using the array syntax
    // TODO: Fix this code so that it changes the third array element to 10
    // using array syntax
    arr[2] = 10;
    printf("Array elements after modification: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Changing array elements using the pointer syntax
    // TODO: Fix this code so that it changes the fifth array element to 20 
    // using pointer syntax and pointer arithmetic
    *(ptr + 4) = 20;
    printf("Array elements after modification using pointer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using malloc correctly
    // TODO: Fix this code so that it allocates an array of 10 ints using
    // malloc and then prints the array elements using pointer syntax
    int *ptr2 = malloc(10 * sizeof(int)); 
    //(int *) is casting the malloc aka:  (int *)malloc(sizeof(int)) //
    for (int i = 0; i < 10; i++) {
        ptr2[i] = i;
    }
    printf("Array elements after malloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    free(ptr2);

    // Part of get_name() function
    char *name = get_name();
    printf("Hello, %s!\n", name);
    free(name);

    return 0;
}

// Fix returning function stack memory
// TODO: Fix this function so that it returns a pointer to a dynamic array
// not a pointer to a stack array
char *get_name(void) {
    char *name = malloc(200); // char *name = malloc(200 * sizeof(char)) //
    printf("Enter your name: ");
    scanf("%s", name);
    return name;
}

