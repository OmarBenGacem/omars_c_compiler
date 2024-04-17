
#include <string>
#include <iostream>
#include <memory>
#include <initializer_list>
#include <vector>
#include <map>
#include <stdlib.h>

using namespace std;


#ifndef utility_hpp
#define utility_hpp


static int mostRecentResult = 0;

static int highestPointer = 0;
static int stackOffset = 0;

std::map<std::string,int> variables;



int UpdateMemory(std::string name) {

    /*
    if (variables.find(key) == variables.end()) {
    //key is not in dictionary
    highestPointer += 1;
    variables[key] = stackOffset + highestPointer;
    mostRecentResult = stackOffset + highestPointer;
    return mostRecentResult;

    } else {
    //key is in dictionary
    
    mostRecentResult = variables[key];
    return mostRecentResult;

    }
    return mostRecentResult;
    */

   //from stack overflow,checks if key "name" is a key in map "variables"
    int hit = 0;
    for (const auto &[key, value]: variables) {
        if(key == name) {
            hit = 1;
        }
    }

    if (hit == 0) {
    //key is not in dictionary
    highestPointer += 1;
    variables[name] = stackOffset + highestPointer;
    mostRecentResult = stackOffset + highestPointer;
    return mostRecentResult;

    } else {
    //key is in dictionary
    
    mostRecentResult = variables[name];
    return mostRecentResult;

    }
    return mostRecentResult;



}

/*
for the temporary rergisters, we use a memory allocator to allocate registers 
t0-6 to be allocated dynamically

this function nextReg gets the next register and allocates it

*/

//should all be false,
static int tempRegs[] = {0, 0, 0, 0, 0, 0, 0};

std::string nextReg() {
    for (int i = 0; i < 7; i++) {
        if(tempRegs[i] == 0) {
            tempRegs[i] = 1;
            return 't' + std::to_string(i);
        }
    }
    return 't7';
}

void removeReg(std::string reg) {
    //I kid you not I couldnt figure out stoi()
    if (reg == 't0') {
        tempRegs[0] = 0;
    } 
    else if (reg == 't1') {
        tempRegs[1] = 0;
    }
    else if (reg == 't2') {
        tempRegs[2] = 0;
    }
    else if (reg == 't3') {
        tempRegs[3] = 0;
    }
    else if (reg == 't4') {
        tempRegs[4] = 0;
    }
    else if (reg == 't5') {
        tempRegs[5] = 0;
    }
    else if (reg == 't6') {
        tempRegs[6] = 0;
    }
   
}

void clearTemps() {
    for(int i = 0; i < 7; i++) {
        tempRegs[i] = 0;
    }
}


static int randomCounter = 0;
//generate just a random number (useful for different loops with similar names)
std::string uniqueStr() {
    randomCounter += 1;
    return std::to_string(randomCounter);
}




//ALL SUBCLASSES




//to finish

#endif