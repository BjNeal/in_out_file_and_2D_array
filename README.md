# in_out_file_and_2D_array
This program demonstrates how to pass a two-dimensional array to a function, changes values in the array, reads in data from a file, and writes data to a file


Barbara Jean Neal’s read me file 
For two dimensional array program that:
//Demonstrates how to pass a two-dimensional array to a function,
//changes values in the array,
//reads in data from a file, and writes data to a file

Stipulations:
10 rows 20 seats per row
Assumptions:
1.	To maximize both customer satisfaction and theater utilization. 
2.	Customers will prefer the seats at the top
3.	Groups will want to be on the same row and next to each other
4.	The theater will appreciate a map view of seats available


1st I created a two dimensional array to represent the free seats
2nd I placed the sampleinput.txt file with the program files.
3rd As I checked off seats in the array I output the information to seated.txt file.
4th When the .txt file was created by the program, it was created in the same folder as the program files, as seen below.
 
5th In Microsoft visual studio select build/Build Solution
 
6th After building the solution, check the output window to make sure it has succeeded, then select Debug/ Start Debugging
 
7th Now the output window will appear with the program messages and showing available seats.
 
8th Below is a copy of the message from the window:
 
******************************************************************
Seats available BEFORE calling reserved seat file.
The seats available are marked with 0:

******************************************************************
    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20

A   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   A
B   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   B
C   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   C
D   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   D
E   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   E
F   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   F
G   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   G
H   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   H
I   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   I
J   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   J

******************************************************************

Now attempting to read from a file sampleInput.txt

Now attempting to  write to file2 seated.txt

No error opening data files.
******************************************************************
Seats available AFTER calling reserved seat file.
The seats available are marked with 0:

******************************************************************
    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20

A   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1   A
B   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1   B
C   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  0   C
D   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1   D
E   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1   E
F   1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  0  0  0   F
G   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   G
H   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   H
I   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   I
J   0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   J

******************************************************************

Type any character:
