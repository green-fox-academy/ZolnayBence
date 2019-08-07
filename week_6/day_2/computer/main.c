
#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{

    Notebook notebook;

    notebook.cpu_speed_GHz = 2.0;
    notebook.ram_size_GB = 8;
    notebook.bits = 32;

    printf(" Notebook's cpu speed GHz: %.1f\n Notebook's ram size GB: %d\n Notebook's bits: %d\n",
                                     notebook.cpu_speed_GHz,notebook.ram_size_GB, notebook.bits);

    struct Computer computer;

    computer.cpu_speed_GHz = 2.8;
    computer.ram_size_GB = 8;
    computer.bits = 32;

    printf("\n Computer's cpu speed GHz: %.1f\n Computer's ram size GB: %d\n Computer's bits: %d\n",
                                    computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);
    return 0;
}