***___DIFFERENCES BETWEEN TEXT AND BINARY FILES___***
/*
___Text Files____:
--------------------
-> Text files store data in plain text format, where characters are represented using character encoding 
   (e.g., ASCII or UTF-8).
-> Text files are human-readable and can be edited using a simple text editor.
-> Each character in a text file occupies a fixed amount of space (usually one byte) 
   and corresponds to a specific character or control character.
-> Text files are typically used for storing and manipulating textual data such as plain text documents, 
   configuration files, source code files, etc.
-> In C programming, text files are read and written using text-based file input/output functions like 
   fopen,fscanf, fprintf, fgets, fputs, etc.
-> When reading from a text file, newline characters ('\n') are treated as end-of-line markers, 
and they are converted according to the platform-specific newline convention (e.g., '\r\n' on Windows).
-> Example : "Hello, World!\nThis is a text file.\n"



____Binary Files____:
--------------------
-> Binary files store data in its raw binary format, without any character encoding or interpretation.
-> Binary files can store any type of data, including text, numbers, images, audio, video, etc.
-> Binary files are not directly human-readable or editable using a text editor.
-> The data in a binary file is stored as a sequence of bytes, which may represent numeric values, 
   memory layouts, or complex structures.
-> In C programming, binary files are read and written using binary file input/output functions 
   like fread,fwrite, fseek, ftell, etc.
-> Binary files preserve the exact byte representation of the data and do not perform any newline or 
   character encoding conversions.
Example: Binary representation of an image or audio file.
*/
