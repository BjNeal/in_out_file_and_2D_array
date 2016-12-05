//By: Barbara Jean Neal
//This program demonstrates how to pass a two-dimensional array to a function,
//changes values in the array,
//reads in data from a file, and writes data to a file

#include <iostream>
#include <iomanip>	
#include <fstream>
#include <string>
using namespace std;

const int	NUM_COLS = 20,						//Number of columns in array
			TBL_ROWS = 10,					//Number of rows in array
			NUM_SEATS = NUM_COLS * TBL_ROWS;		//Total number of available seats

// Function prototype
void showArray (int [] [NUM_COLS], int);				//prints array
void readFile(int [] [NUM_COLS], int, ifstream&, ofstream&);		//reads file of seat selections; pass array and file
void writeFile(int [] [NUM_COLS], int, ofstream&);			//writes to  array and selects seats; pass array and file


int main()
{
	ofstream outputFile;						//Used to write data to a file
	ifstream inputFile;						//read data from a file
	

	int table[TBL_ROWS][NUM_COLS] = {		};		//2d array with all default 0 values


	cout << "******************************************************************";
	cout <<"\nSeats available BEFORE calling reserved seat file.\n";
	showArray (table, TBL_ROWS);						// call function show available seats

	
	inputFile.open("sampleInput.txt");					//read data from file
	cout << "\nNow attempting to read from a file ""sampleInput.txt""\n";
	if(!inputFile)
		cout << "Error opening data file.\n";
		
	outputFile.open("seated.txt");						//Write data to a file
	cout << "\nNow attempting to  write to file2 ""seated.txt""\n";
	if(!outputFile)
		cout << "Error opening data file2.\n";
			
	else
		{
			readFile(table, TBL_ROWS, inputFile, outputFile);	
			inputFile.close();					//close the files
			outputFile.close();		
		}
	cout << "******************************************************************";
	cout <<"\nSeats available AFTER calling reserved seat file.\n";
	showArray (table, TBL_ROWS);						//call function showarray to show available seats


	
	char c;
	cout <<"\nType any character: ";
	cin>> c;

	return 0;
}



//This function prints a map view of the seats
void showArray (int seats[] [NUM_COLS], int numRows)
{
	cout << "The seats available are marked with 0:\n\n";
	cout << "******************************************************************\n";

	 for (int seat=0,col= -1; col < NUM_COLS; col++)			//print column names
		{
			if (seat!=0)
			cout << setw(2) << seat++ << " ";
			else
			{
				cout << setw(3)<<"";
				seat++;
			}
		}
	cout << endl<< endl;

	char g = 'A';								//print row names
	for (int row = 0; row< numRows; row++)
	{	
		cout << setw(3)<< left << g ;					//print row names

		for (int col= 0; col < NUM_COLS; col++)
		{
			cout << setw(2)<< right << seats[row][col] << " ";
		}

		cout << setw(3) << g ;						//print row names
		g++;
		cout << endl;
	}
		cout << "\n******************************************************************\n";
}



//This function reads from a file, assign seats, and write to a file

void readFile(int seats[] [NUM_COLS], int numRows, ifstream &inputFile,  ofstream &outputFile )
{
	string resNumber;
	int numSeats= 0 ;
	int total = 0;
	char letter = 'A';

	for (int row=0;  row < TBL_ROWS; row++,letter++)

	{
		int col= 0; total = 0;

		while ((NUM_COLS - total- numSeats) >=0)				//dont break groups across rows
		{
			
				total += numSeats ;					//keeps track of used seats on this row

				while (numSeats > 0)	
				{	
					outputFile << letter <<(col +1);		//send single seat assignment
					if (numSeats > 1)
						outputFile << ", ";			//print comma to file except when numSeats = 1
					
					seats[row][col] = 1;
					numSeats--;
					col++;
											
				}
				outputFile<< endl  ;					//starts new line within file before/after each reservation

				resNumber = "\0";						
				inputFile >> resNumber >> numSeats;	
				outputFile << resNumber << " ";				//send reservation #
				if (resNumber == "\0")					// breaks from loop when file stops reading
					break;
		}	

		if (resNumber == "\0")							// breaks from loop when file stops reading
					break;
	}
	cout << "\nNo error opening data files.\n";

}

