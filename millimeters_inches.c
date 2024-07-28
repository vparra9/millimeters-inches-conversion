#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h> //for printf and scanf
#include<ctype.h> //for tolower and toupper

void Greeting(void);
//display a welcome message
void InitialPractice(void);
//declare, ask, and get a character
//display the lowercase version of the letter(character) and the numerical value
//display the uppercase version of the letter(character) and the numerical value
void millimetersToInches(void);
//declare, ask and get length in millimeters
//convert the millimeters to inches
//print both millimeters and inches onto the screen
void InchestoMillimeters(void);
//declare, ask and get the length in inches
//convert the inches to millimeters
//print both inches and millimeters onto the screen

 //This is my Greeting statement.
void Greeting(void)
{
    printf("Hello welcome to my assignment!\n"); 
}

//This is my initial implementation for printing
//a lowercase and uppercase character and value.
void InitialPractice(void)
{
    char ask;
    printf("Enter your first initial: "); 
    scanf(" %c", &ask);
    printf("You entered: %c\n", ask);
    
    char lowerLetter = tolower(ask);
    printf("What you entered in lowercase: %c\n", lowerLetter);
    printf("What you entered in lowercase in numerical terms: %d\n",(int) lowerLetter);
    
    char upperLetter = toupper(ask);
    printf("What you entered in uppercase: %c\n", upperLetter);
    printf("What you entered in uppercase in numerical terms: %d\n\n",(int) upperLetter);
}

 //This is my conversion for millimeters to inches.
void millimetersToInches(void)
{
    const double INCHES_TO_MILLIMETERS=25.4;
    double askMillimeters;
    
    printf("Enter millimeters you want to convert to inches: \n");
    scanf("%lf", &askMillimeters);
    printf("The conversion for %.2lf millimeters = %.2lf inches",askMillimeters, askMillimeters/INCHES_TO_MILLIMETERS);
}

//This is my conversion for inches to millimeters.
void InchestoMillimeters(void)
{
    const double INCHES_TO_MILLIMETERS=25.4;
    double askInches;
    
    printf("\nEnter inches you want to convert to millimeters: ");
    scanf("%lf", &askInches);
    printf("The conversion for %.2lf inches = %.2lf millimeters",askInches, askInches*INCHES_TO_MILLIMETERS);
}

int main(void) 
{
    Greeting(); 
    InitialPractice();
    millimetersToInches();
    InchestoMillimeters();
    return 0;    
}
