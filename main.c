#include <stdio.h>
#include <stdlib.h>
//use <> for c sources. use "" for your own sources
#include "car.h"

//comile with clang: "clang main.c car.c" 
//specific output file name: "clang main.c car.c -o outputfilename"
int main() {
    char station_name[] = "simon's gas station";
    int gasprice = 10;
    printf("welcome to %s\n", station_name);
    printf("the current gas price is %i$\n", gasprice);
    printf("%s has parked his car here\n", GetOwner());
    //printf("%s has parked his car here\n", GetOwner());
    return 0;
}