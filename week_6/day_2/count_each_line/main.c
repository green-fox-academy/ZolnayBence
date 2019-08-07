#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file
int line_in_file(char line_address[256]);
int main ()
{
    char file_name = "../text.txt";

    printf("%d", line_in_file("../text.txt"));
    return 0;
}

int line_in_file(char line_address[256])
{
    FILE* my_file = fopen(line_address, "r");
    if(my_file == NULL)
    {
        printf("File cannot be openned");
        return 2;
    }
    char text[256];
    int counter = 0;
    while(fgets(text, 256, my_file) != NULL){
        counter++;
    }

    fclose(my_file);
    return counter;
}