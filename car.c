#include <stdio.h>
#include <stdlib.h>
#include "car.h"

const char owner[] = "nils";
int fuelLevel = 0;

const char* GetOwner(){
    return owner;
}

int GiveFuel(int amount){
    if (fuelLevel+amount > 100)
    {
        return 1;
    }
    fuelLevel += amount;
    return 0;
}