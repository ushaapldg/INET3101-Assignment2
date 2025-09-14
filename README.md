# INET3101-Assignment2
Problem Statement:
Generalize the to_binary() function of Listing 9.8 - The binary.c ProgramLinks to an external site. to a to_base_n() function that takes a second argument in the range 2–16. Anything outside the range of 2-16 should trigger an error message from the program.

Output: It should print the number that is its first argument to the number base given by the second argument. For example, to_base_n(129,16) should display 0x81, the base-16 (also called hexadecimal) equivalent of 129 . Test the function in a complete program.

Note: 

Base 10 numbers are 0,1,2,3,4,5,6,7,8,9,10,11, 12
Base 8 (Octal) numbers are (preceded by just 0) 0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17,20, 21, 22, 23, 24, 25
Base 16 (hexadecimalLinks to an external site.) numbers are (preceded by 0x) 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,10,11,12,13,14,15,16,17,18,19,1a,1b,1c,1d,1e,20
For example:

Base 10 : 21  (10*2 +1  = 21)
Equivalent Octal number ( preceded by 0): 025 (8*2 + 5 = 21)  
Equivalent Hexadecimal number (preceded by 0x): 0x15 (16*1 + 5 =21)

Solution:
A while loop repeats the process of converting numbers until opted out of in a conditional statement. The program asks for both a number and the base it should be converted to. Then it inputs the two values in a method, to_base_n(), which uses recursion to evaluate the converted number. The method divides the given number by the base as many times as needed until it calculates a quotient of 0. Then it prints the remainder of each division from a string of characters called digits[]. The resulting line of characters printed is the converted value. 

Pros and Cons:
This program uses recursion in an effective and functional way, but doesn't actually store the value of the conversion. If a piece of software needed to reference a converted value, this program would not be useful because it only prints out the converted value.
