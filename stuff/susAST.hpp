#ifndef susAST_hpp
#define susAST_hpp

#include <string>
#include <iostream>
#include <memory>
#include <initializer_list>
#include <vector>
#include <map>
#include <stdlib.h>

using namespace std;


//S0 is stack pointer for functon
//sp is stack pointer







//this should contain the memory address of the most recent variable


/*
This is a map: And it is a key value pair of the variable and it's address
in memory.

e.g if viariable "a" has value 12 in address 0x1000

then:

variables["a"] = 0x1000

and if you do:
lw a0 r0[0x1000]

then register a0 will now have a value of 12 in it
*/



/*

IMPORTANT NOTES:

return register: a0
for returning values and is also for the most recently calculated value

temporary registers:
for temporary suff t0-6



*/














#endif


