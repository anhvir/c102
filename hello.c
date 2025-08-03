#include <stdio.h>

// avo@unimelb.edu.au 04/08/2025
// This program prints a large-scale message "Hello World!" using the '#' character.
// Each letter is defined as a series of strings, representing the rows of the letter.
// Line height = 7 

// Challenges:
//   1. Try this
//   2. Change to print a string you like
//   3. [HARD - can probably done at the end of the semester] Change to print the program argument, for example:
//       ./hello Hello My Friend
//      would print out
//        Hello My Friend   
//


// Character 'H'
const char *H[] = {
    "#   #",
    "#   #",
    "#   #",
    "#####",
    "#   #",
    "#   #",
    "#   #",
};

// Character 'e'
const char *e[] = {
    "#####",
    "#    ",
    "#    ",
    "#####",
    "#    ",
    "#    ",
    "#####",
};

// Character 'l'
const char *l[] = {
    "#    ",
    "#    ",
    "#    ",
    "#    ",
    "#    ",
    "#    ",
    "#####",
};

// Character 'o'
const char *o[] = {
    " ### ",
    "#   #",
    "#   #",
    "#   #",
    "#   #",
    "#   #",
    " ### ",
};

// Character 'W'
const char *W[] = {
    "#   #",
    "#   #",
    "#   #",
    "#   #",
    "# # #",
    "# # #",
    " # # ",
};

// Character 'r'
const char *r[] = {
    "#### ",
    "#   #",
    "#   #",
    "#### ",
    "# #  ",
    "#  # ",
    "#   #",
};

// Character 'd'
const char *d[] = {
    "#### ",
    "#   #",
    "#   #",
    "#   #",
    "#   #",
    "#   #",
    "#### ",
};

// Character '!'
const char *exclamation[] = {
    " # ",
    " # ",
    " # ",
    " # ",
    " # ",
    "   ",
    " # ",
};

int main(int argc, char *argv[]) {
    // Determine the height of the message. All letters are designed to be
    // the same height, so we can use the size of any of the arrays.
    int height = sizeof(H) / sizeof(H[0]);

    // Loop through each row to print the message line by line.
    for (int row = 0; row < height; row++) {
        // Print the row for each letter in "Hello World!", with appropriate spacing.
        printf("%s  %s  %s  %s  %s       %s  %s  %s  %s  %s    %s\n", 
               H[row], e[row], l[row], l[row], o[row], W[row], o[row], r[row], l[row], d[row], exclamation[row] );
    }

    return 0;
}

