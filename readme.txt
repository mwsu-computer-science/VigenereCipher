
Assignment:
	Write a program that will read plain text from some input file and write the same text in an
	encrypted format to a different output file. The type of encryption we will be using is a rotating shift cipher
	called the "Vigenere Cipher". A description of the Vigener cipher can be found here: http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher.

	This assignment is a "warm up" that will re-inforce your cs1 skills, as well as introduce some new concepts (such as pointers). You don't
	need to understand every line of the program initially, but you soon will. A main goal behind this assignment (besides the fact that 
	encryption is cool) is to show you a procedural solution to a problem which we will then turn into a class (object oriented) solution.

---------------------------------------------------------------------------------------------------------------------------------------------

Solution overview (remember, there are many many ways to approach every problem):
	Set the input file name, output file name, and key.
	Read the plain text from the input file (either all at once, or one character at a time).
	Encipher the plain text and create an encrypted output file by doing something similar to the following:
		1. Read 1 character of the plain text (p)
		2. Read 1 character of the key (k)
		3. Lookup letter in vigenere 2d array similar to: Vigenere[p][k] 
		4. Write out that letter as cipher text to the output file.
Problems / Points of interest:
	1. Letters cannot be used as indexes into arrays.  (At least not yet.)
	2. How do we convert letters to integers to be used as indexes?
	3. We will ignore all punctuation, numbers, and spaces that exist in the input file. 
	4. All letters will be converted to uppercase, then encrypted. 

---------------------------------------------------------------------------------------------------------------------------------------------

Requirements:

	Your program will be run from the command line in the following fashion:
		C:\> vigenere [input_file_name] [output_file_name] [keyword]
	
	Your program will contain the following functions:
		/**
		* Build the vigenere cipher 2d array
		* Params: char** (char pointer to a pointer)(explained later)
		* Returns: void
		*/
		void BuildVigenere(char** &temp);

		/**
		* Reads a character from the input file.
		* Params: ifstream - passed by reference
		* Returns: char - the next character in the file
		*/
		char GetNextCharacter(ifstream &ifile);
	 
		/**
		* Receives a letter as a parameter and turns it into an integer index, in order to access the Vigenere array.
		* The letter can be upper or lowercase, it will be converted to uppercase if necessary.
		* Params: char - letter (upper or lowercase).
		* Returns: int - value between 0 and 25 (inclusive).
		*/
		int GetIndex(char letter);

		/**
		* Receives a character as a parameter and tests to make sure it is a value a-z or A-Z.
		* Params: char - letter (upper or lowercase).
		* Returns: bool - 1 if it is a letter or 0 if it is not.
		*/
		bool IsLetter(char letter);

Pseudo Test Cases (forcing incremental programming):
---------------------------------------------------------------------------------------------------------------------------------------------

1) Run your exe from the command line and output the 3 parameters to the screen like the following:

	Input File Name: blah.txt
	Output File Name: outblah.txt
	Keyword: mysecretpassphrase

	If all 3 parameters do not exist, fail nicely.

2) Loop through your keyword outputting each letter to the screen. 

3) Loop through your keyword outputting the "index" value of each letter to the screen. 

4) Attempt to open "blah.txt" if it does not exist, fail nicely.

5) Attempt to create "outblah.txt", if you cannot, fail nicely.

6) Open "blah.txt" for reading, read in all the text, then output it (unfiltered) to the screen.

7) Open "blah.txt" for reading, read in all the text, then output the text (unfiltered) to "outblah.txt".

8) Open "blah.txt" for reading, read in all the text, then output the filtered text to "outblah.txt".

9) Open "blah.txt" for reading, read in all the text, then output the filtered & encrypted text to "outblah.txt".
	
=======
Read the plain text from some input file
Read the key from the command line or input file
Encipher the plain text and create an encrypted output file
	1. Read 1 character of the plain text (p)
	2. Read 1 character of the key (k)
	3. Lookup letter in vigenere 2d array similar to Vigenere[p][k] 
	4. Write out that letter as cipher text
Problems:
	Letters cannot be used as indexes into arrays.  (At least not yet.)
	How do we convert letters to indexes?

