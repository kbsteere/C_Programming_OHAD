### C Programming - One Hour A Day
This project will track C programming examples, projects and questions in the
[Sams Teach Yourself - C Programming.](https://www.informit.com/store/c-programming-in-one-hour-a-day-sams-teach-yourself-9780789751997)
I will also provide summaries of each chapter and my own opinion on what could have been changed. 

This is meant to review C programming in general and practice simple tasks. 

#### Chapter 1: Getting Started with C
The beginning of this chapter covers the basics of how a program in C is compiled 
and linked. It talks about IDEs and provides a list of ones that the reader can use and 
has the reader generate the standard "Hello, World!" program. I think this chapter could have touched on some important items. Like using gcc via the terminal to compile code. 
Maybe i'm partial being engineer and liking to understand how things work, but I believe the reader could have benefitied from how an IDE compiles and links code since most basically 
use a form of gcc/g++ no matter what OS environment is being used. 

#### Chapter 2: The Components of a C Program
Chapter 2 walks through the components of a C program. It provides examples and then goes into a section by section overview of components like the main function, #include and 
#define directives, variables, function prototype, program statements, printf statement, scanf statement, return statement, function definition and comments. It provides some 
examples which I think are a little too advanced for very beginner programmers but intermediate / expert users would think they are simple. I think many programming books have this 
issue where they attempt to show an example of a program but they include functions that haven't been introduced and don't instruct the new programmer on the fact that they should
go look up the function in an attempt to understand what it does. The books tend to make an assumption that users will just look at the program and accept that they don't understand 
some of the information, but I like to assume people who are learning programming are facinated by how things operate and want to understand them as soon as they are introduced. 

#### Chapter 3: Storing Information: Variables and Constants
Goes through the size of all variables types (int, float, char, etc..) and 
over constants (literal & symbolic). The information is good and having the example of 
sizeof being used in one of the examples gives the programmer an insight into the 
fact that you can check the size of a type. The only problem with the example is 
that is doesn't compile if you create it. The program requires %zu instead of %d which
maybe depending on the IDE the author was using was able to handle this error but if
you use gcc (on linux) then the comiple throws "expects argument of type 'int', but 
argument has type long unsigned int" or something very similar. 
The const.c program was actually the first program that I think fits in the section
of the book it is in. It covers everything that the programmer has gone through in the
book thus far.   
 
