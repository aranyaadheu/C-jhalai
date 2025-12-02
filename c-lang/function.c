#include <stdio.h>
#include <string.h>
                    // formal argument
void happyBirthday(char name[], int age){ // parameters are what the function expect to receive
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
} // void: does not return any value to the code that called it. 

int main(){
    
    // function = A resuable section of code that can be invoked "called"
    //              Arguments can be sent to a function so that it can use them

    
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // safely read a line of text (including spaces) 
    name[strlen(name) - 1] = '\0';  // and then clean up the input to remove an unwanted newline character. 

    /*fgets func is used to read an entire line of text froma stream.
    it's generally preferred over scanf("%s",  ...) for reading strings
    because it handles spaces and prevents buffer overflows(it reads at most sizeof(name) characters
    
    When fgets reads input, it reads everything up to and including 
    the newline character (\n) that the user enters when pressing the $\text{Enter}$ key, 
    and stores it in the string. For example, if you type "John" and press Enter, 
    the name array will contain $\text{"John\n\0"}$. 
    This trailing \n is usually undesirable when printing or processing the name later.
    
    */

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age); // arguments are what you send a function

    return 0;
}