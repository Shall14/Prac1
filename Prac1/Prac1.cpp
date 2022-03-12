// Prac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
    /* The following are function declarations. They _declare_ that the functions
    exist but they do not _define_ what the functions actually do (the definitions
    appear after the main function). By declaring these functions here, they may be
    called in the main before they are defined.
    Note: function1 expects an int type, whereas function2 expects a pointer to an int
    */
    void function1(int);
    void function2(int*);
    int main() {
        int number = 10;
        /* C1. display the contents of number to the screen */
        printf("Value of number is %d\n", number);
        
        /* C2. display the address of variable number to the screen */
        printf("Address of number is %p \n", &number);
        /* C3. call function1 */
        function1(number);
        /* C4. display the contents of number to the screen */
        printf("Value of number after call to function1 is: %d\n", number);

        /* C5. call function2 */
        function2(&number);

        /* C6. display the contents of number to the screen */
        printf("Value of number after call to function2 is: %d\n", number);
        return 0;
    }
    void function1(int number)
    {
        /* C7. increment number by one */
        number++;
        /* C8. display the contents of number to the screen (should be 11) */
        printf("Value of number + 1 : %d\n", number);
        /* C9. display the address of number to the screen */
        printf("Address of number + 1 %p \n", &number);
    }
    void function2(int* numberPtr)
    {
        /* C10. display the address of number to the screen (should be the same
        address as you displayed first in main) */
        printf("Address of Number is %p \n", numberPtr);
        /* C11. display the value that the pointer numberPtr points to */
        printf("Value of Number is %d\n", *numberPtr);
        /* C12. increment the value stored in number */
        *numberPtr = *numberPtr + 1;
        /* C13. display the contents of number to the screen */
        printf("Value of Number is %d\n", *numberPtr);
    }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
