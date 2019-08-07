#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{

    FILE* file_ptr = fopen("../my-file.txt", "r");
    char line;
    if(file_ptr == NULL){
        printf("Cannot open file \n");
        return 2;
    }
    line = fgetc(file_ptr);
    while(line != EOF)
    {
        printf("%c", line);
        line = fgetc(file_ptr);
    }
    fclose(file_ptr);

    return 0;
}