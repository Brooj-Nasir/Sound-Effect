# Sound Effect Based on Integer Parity

## Overview

Welcome to the **Sound Effect Based on Integer Parity** project! This interactive C++ console application demonstrates how sound effects can be integrated into a program. Based on the parity (even or odd) of an integer entered by the user, which is basically to just make it more interactive you could use other logics as well,the program plays a specific sound effect and provides feedback on the console.

## Features

- **Sound Playback**: Plays a sound effect if an even integer is entered.
- **Parity Feedback**: Displays a message indicating whether the entered integer is odd or invalid.
- **User Interaction**: Prompts the user to input an integer and provides auditory and textual feedback based on the input.
## How to Add Sound
For Dev C++ compiler go to new choose project then choose Console project and create it. Add libraries mentioned below and write whatever the code logic you want for sound effect add following line 
```
 PlaySound(TEXT("sound.wav"), NULL, SND_SYNC);
```
and also make sure the project and the sound file should be in same folder !!
## How to Use

1. **Run the Program**: Compile and execute the provided C++ code in your preferred development environment or terminal.
2. **Enter an Integer**: When prompted, enter an integer value.
3. **Experience the Output**:
   - If the integer is even, the program will play a sound effect (`like-a-boss-136519.wav`).
   - If the integer is odd, the program will display "odd".
   - For invalid inputs, the program will display "Invalid".
4. **Exit**: After the output is displayed, the program will terminate.

## Code File

You can view the code for this application [here](main.cpp).

## Requirements

- C++ compiler
- Windows operating system
- `<windows.h>` and `<mmsystem.h>` for sound functions (Windows-specific)
- Sound file (`like-a-boss-136519.wav`)
- Sample Music should be in .wav format **sample.wav** .
## Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/your-repo/Sound-Effect-Based-On-Integer-Parity.git
    cd Sound-Effect-Based-On-Integer-Parity
    ```
2. **Compile the program**:
    ```bash
    g++ -o sound_effect_player main.cpp -lwinmm
    ```
3. **Run the program**:
    ```bash
    ./sound_effect_player
    ```

## Contributions

Contributions are welcome! Please fork this repository and create a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Sample Code

Here's a snippet of the main functionality:

```cpp
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int main() {
    int n;
    cout << "Enter integer = ";
    cin >> n;

    switch (n % 2) {
        case 0:
            cout << "Displaying music:";
            PlaySound(TEXT("like-a-boss-136519.wav"), NULL, SND_SYNC);
            break;
        case 1:
           ...
