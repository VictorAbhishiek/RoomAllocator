Room Allocation System
# Project Overview
The Room Allocation System is a C++ program that calculates the minimum number of rooms required in a hotel to 
accommodate guests based on their check-in and check-out times. The application optimally assigns rooms and ensures 
that the minimum number of rooms is used.

# Features
Input: Arrival and departure times of guests.
Output: The minimum number of rooms needed to accommodate all guests.
Written in C++.

# Folder Structure

RoomAllocation/
│
├── main.cpp                    # Main file containing the execution logic
├── RoomAllocator.cpp            # Logic for room allocation algorithm
├── RoomAllocator.h              # Header file for RoomAllocator class
├── roomallocator.exe            # Compiled executable (generated after build)
├── README.md                    # This readme file
└── .vscode/
    └── tasks.json               # Build configuration for Visual Studio Code

# Prerequisites
Before running this project, ensure you have the following:
g++ compiler: Install the MinGW g++ compiler. Download MinGW
Visual Studio Code: Install VS Code

How to Set Up the Project Locally
# Step 1: Clone the Repository
Clone the project from GitHub to your local machine using the following command:
git clone https://github.com/victorabhisheik/RoomAllocation.git
cd RoomAllocation

# Step 2: Open in Visual Studio Code
Open VS Code:
Select File > Open Folder.
Navigate to the RoomAllocation folder and open it.

# Step 3: Configure the Build Task
Ensure you have the .vscode/tasks.json file configured to automate the build process. The tasks.json should look like this:
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build C++ file",
            "type": "shell",
            "command": "g++",
            "args": [
               "-g",
                "${workspaceFolder}/main.cpp", 
                "${workspaceFolder}/RoomAllocator.cpp", 
                "-o",
                "${workspaceFolder}/roomallocator.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"]
        }  
    ]
}

# Step 4: Build the Project
Open the terminal in VS Code (Ctrl + ``).
Run the build task by pressing Ctrl + Shift + B to compile the project.
If successful, it will generate roomallocator.exe in the project folder.

How to Run the Code
# Step 1: Run the Executable
After building the project, follow these steps to run the program:
1. Open the terminal or Command Prompt in the project folder.
2. Navigate to the folder:
cd path\to\your\project\RoomAllocation

3. Run the executable:
./roomallocator.exe

# Step 2: Provide Input
The program will prompt you to enter the number of guests and their arrival and departure times. For example:
Enter number of guests: 3
Enter arrival and departure times (e.g., 1 4, 2 6, 5 8): 1 4 2 6 5 8

# Step 3: View Output
The program will calculate and display the minimum number of rooms required:
Minimum number of rooms required: 2

# Additional Information
If you face any issues during the build or run process, ensure that:

The g++ compiler is installed correctly.
All source files (main.cpp, RoomAllocator.cpp, and RoomAllocator.h) are present in the project folde

# Future Enhancements
Optimize the algorithm for larger datasets.
Add graphical representation of room allocation.













