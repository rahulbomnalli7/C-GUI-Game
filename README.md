# Rock, Paper, Scissors Game with GTK

This is a simple Rock, Paper, Scissors game implemented in C using the GTK library. Players can choose their move, and the computer's move is generated randomly. The game's outcome is displayed on the screen.

## Prerequisites

Before running the game, you'll need to set up your development environment and install the necessary dependencies. Follow the instructions below based on your operating system:

### Windows

1. **Install MinGW**:
   - Download and install MinGW from [http://www.mingw.org/](http://www.mingw.org/).
   - Follow the installation instructions.

2. **Install GTK for Windows**:
   - Download the Windows version of GTK from [GTK for Windows](https://www.gtk.org/download/windows.php).
   - Choose the appropriate version (32-bit or 64-bit) and download the installer.
   - Run the installer and follow the installation instructions.

3. **Set Up the Build Environment**:
   - Add the MinGW and GTK binaries to your system's PATH environment variable.

4. **Compile and Run the Code**:
   - Open a Command Prompt.
   - Navigate to the directory where your code is saved.
   - Compile the code using the following command:
     ```
     gcc -o rockpaper rockpaper.c `pkg-config --cflags --libs gtk+-3.0`
     ```
   - Run the game:
     ```
     rockpaper.exe
     ```

### Linux

1. **Install GCC**:
   - Most Linux distributions come with GCC pre-installed. If not, install it using your package manager. For Debian/Ubuntu, run:
     ```
     sudo apt-get install gcc
     ```

2. **Install GTK for Linux**:
   - Install the GTK development libraries using your package manager. For Debian/Ubuntu, run:
     ```
     sudo apt-get install libgtk-3-dev
     ```

3. **Compile and Run the Code**:
   - Open a terminal.
   - Navigate to the directory where your code is saved.
   - Compile the code using the following command:
     ```
     gcc -o rockpaper rockpaper.c `pkg-config --cflags --libs gtk+-3.0`
     ```
   - Run the game:
     ```
     ./rockpaper
     ```

## Gameplay

- Click one of the buttons labeled "Rock," "Paper," or "Scissors" to make your choice.
- The computer's choice will be generated randomly.
- The game outcome will be displayed on the screen.

Have fun playing Rock, Paper, Scissors!

