# C-GUI-Game
Rock, Paper, Scissors Game in C with GTK
This is a simple interactive game of Rock, Paper, Scissors implemented in C using the GTK library for the graphical user interface. 
Players can click buttons to make their choice, and the computer's choice is generated randomly. 
The game's outcome is displayed on the screen, and it's a fun example of a graphical application using GTK in C.

##How to run!
To run the code you provided on a Windows system, you will need to set up a development environment with the necessary dependencies, including GTK. Here are the general steps to get it up and running:

Install MinGW:

You will need the MinGW (Minimalist GNU for Windows) compiler to compile and build C code on Windows. You can download it from the official website: http://www.mingw.org/
Follow the installation instructions to set up MinGW.
Install GTK for Windows:

GTK is a GUI library that your code relies on. You'll need to download and install the Windows version of GTK. You can find pre-built binaries on the GTK website: https://www.gtk.org/download/windows.php
Choose the appropriate version (32-bit or 64-bit) and download the installer.
Run the installer and follow the installation instructions.
Set Up the Build Environment:

Add the MinGW binaries and GTK binaries to your system's PATH environment variable. This will allow the compiler and your program to find the necessary libraries and tools.
Compile and Run the Code:

Open a Command Prompt or a terminal.

Navigate to the directory where your C code is saved.

Compile the code using GCC (the MinGW compiler). Assuming your code file is named rps_game.c, you can use the following command to compile it:

css
Copy code
gcc -o rps_game rps_game.c `pkg-config --cflags --libs gtk+-3.0`
The -o rps_game option specifies the name of the output executable.
The backticks around pkg-config ... include the GTK libraries.
After compilation, you should have an rps_game.exe executable in the same directory.

Run the Game:

Simply run the game by executing the rps_game.exe:

Copy code
rps_game.exe
This should launch the game, and you can play Rock, Paper, Scissors with the GTK graphical interface.

Please note that you need to have GTK installed correctly, and the system PATH variable configured properly for this to work. If you encounter issues during installation or running the code, refer to the GTK documentation or MinGW documentation for troubleshooting or consult the GTK community for Windows-specific support.
