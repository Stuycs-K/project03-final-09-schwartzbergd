# Text Editor

## Group Members
David Schwartzberg 

## Description

### Overview
I will make a simple text editor, similar to nano, that can allow the user to create, edit, and save files.

### Usage
The program will be run with the executable and a filename as its only command line argument (extra: argument is optional and will open the text editor, only needed the filename to be provided on first save), which will create the file if it doesn't exist, or open the existing file and show the previously saved text. The user will then be able to change the file's contents as they wish and save/exit using signals from the keyboard.

### Design
The file will be opened/created as needed using the open command, and the the existing file contents will be read into an allocated `char[][]` buffer. This buffer will be a dynamiclly sized array of arrays, which both can grow to arbitrary size (like python's lists) using realloc(). This buffer can then be displayed to the user, which will change (resizing if needed) as it is edited. 

Extra file information will also be shown to the user by using the stat() command on the file.

When needing to save, exit, or use other keyboard shortcuts, the signals sent by the user will be intercepted by the program and then executed.

The cursor will be kept track of by the program and moved using terminal codes. I don't know how to get unbuffered input from stdin yet but there's probably a way?

### Timeline
Mon 1/6 - Start <br>
Tues 1/7 - File handling finished, be able to exit/save <br>
Wed 1/8 - Show info from stat/file contents on screen <br>
Thur 1/9 - User will be able to append to file, not edit directly yet <br>
Fri 1/10 - Be able to insert and delete characters in the file; control the cursor using keyboard arrows <br>
Remaining time:
- add extra keyboard shortcuts (copy/paste)
- finish documentation
