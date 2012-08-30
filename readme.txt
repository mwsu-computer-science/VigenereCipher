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