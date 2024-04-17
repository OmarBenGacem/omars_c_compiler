#pragma once


#include <math.h>
#include <map>

//The class context
class Context
{

public:
//a zero means the register is free, a 1 means the register is used
//regisers not available are not noted down
//-1 means the register is not available for use

//0 = free
//1 = NOT AVAILABLE
//-1 = FORBIDDENs
int registers[32] =
{
-1,                             //x0                       //a0 = zerp reg
-1,                             //x1                       //ra = return address
-1,                             //x2                       //sp = stack pointer
-1,                             //x3                       //gp = global pointer
-1,                             //x4                       //tp = thread pointer
0,                              //x5                       //t0
0, 0,                           //x6 x7                    //t1-2
-1,                             //x8                       //frame pointer
-1,                             //x9                       //save register
0, 0, 0, 0, 0, 0, 0, 0,         //x10 - x17                //a0-7
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   //x18 - x27                //s2-11 Saved Registers
0, 0, 0, 0                      //x28 - x31                //t3-6
};


//a map to store variable names and memory locations
std::map<std::string, int> memoryBindings;

//a unique integer
int unique = 0;

//all stack related items:
int StackPointer = 0;
int StackOffset = 0;

std::string returnLabel;
//return label (for returning from a loop)


void allocate(int i) {
    registers[i] = 1;
}

void deallocate(int i) {
    registers[i] = 0;
}

int getReg() {
    for(int i = 5; i < 32; i++) {
        //skipping forbidden registers
        if (i < 8 || i > 17) {
            if (registers[i] == 0) {
                //the register is now taken
                allocate(i);
                //return the index of the new array
                return i;
            }
        }
    }
    //no regsiters are available
    return -1;
}

std::string getArgRegN() {
//get a register for a functional argument
    for(int i = 10; i < 18; i++) {
        if (registers[i] == 0) {
            //the register is now taken
            allocate(i);
            //return the index of the new array
            return regName(i);
         }
    }
        //no regsiters are available
    throw std::runtime_error("Not Valid Register for Functional Argument.");
    return "t0";
}

void clearArgReg() {
    for(int i = 10; i < 18; i++) {
        deallocate(i);
    }
}

std::string getRegN() {
    for(int i = 5; i < 32; i++) {
        //skipping forbidden registers
        if (i != 8 || i != 9) {
            if (registers[i] == 0) {
                //the register is now taken
                allocate(i);
                //return the index of the new array
                return regName(i);
            }
        }
    }
    //no regsiters are available
    throw std::runtime_error("Not Valid Register.");
    return "t0";
}

std::string incArgReg(std::string current) {
    if (current == "a0") {
        return "a1";
    } else if (current == "a1") {
        return "a2";
    } else if (current == "a2") {
        return "a3";
    } else if (current == "a3") {
        return "a4";
    } else if (current == "a4") {
        return "a5";
    } else if (current == "a5") {
        return "a6";
    } else if (current == "a6") {
        return "a7";
    }

    throw std::runtime_error("have no more functional argument registers");
    return "t0";
}

void deallocateN(std::string Reg) {
    //the pinnacle of laziness:
    if (Reg == "t0") {
        deallocate(5);
    } else if (Reg == "t1") {
        deallocate(6);
    } else if (Reg == "t2") {
        deallocate(7);
    } else if (Reg == "t3") {
        deallocate(28);
    } else if (Reg == "t4") {
        deallocate(29);
    } else if (Reg == "t5") {
        deallocate(30);
    } else if (Reg == "t6") {
        deallocate(31);
    } else if (Reg == "a0") {
        deallocate(10);
    } else if (Reg == "a1") {
        deallocate(11);
    } else if (Reg == "a2") {
        deallocate(12);
    } else if (Reg == "a3") {
        deallocate(13);
    } else if (Reg == "a4") {
        deallocate(14);
    } else if (Reg == "a5") {
        deallocate(15);
    } else if (Reg == "a6") {
        deallocate(16);
    } else if (Reg == "a7") {
        deallocate(17);
    } else if (Reg == "s2") {
        deallocate(18);
    } else if (Reg == "s3") {
        deallocate(19);
    } else if (Reg == "s4") {
        deallocate(20);
    } else if (Reg == "s5") {
        deallocate(21);
    } else if (Reg == "s6") {
        deallocate(22);
    } else if (Reg == "s7") {
        deallocate(23);
    } else if (Reg == "s8") {
        deallocate(24);
    } else if (Reg == "s9") {
        deallocate(25);
    } else if (Reg == "s10") {
        deallocate(26);
    } else if (Reg == "s11") {
        deallocate(27);
    }



}

std::string regName(int i) {
    //turns a register from x_ to a_ or s_ or t_
    if (i <= 7 && i >=5) {
        return "t" + std::to_string(i - 5);
    }
    if(i <= 17 && i >= 10) {
        return "a" + std::to_string(i - 10);
    }
    if(i <= 31 && i >= 28){
        return "t" + std::to_string(i - 25);
    }
    return "bad";
}

int storeVar(std::string var) {
    //takes in a variable and outputs it's address (rellative to curernt frame pointer)
    return 1;

}

std::string getName(std::string name) {

    unique += 1;

    return "_" + name + "_" + std::to_string(unique);

}

std::string allocateVariable(const std::string& name) {
//returns the string containing the number of the correct stack offset
    if (memoryBindings.count(name)) {
        return std::to_string(memoryBindings[name]);
    }
    StackOffset -= 4;
    memoryBindings[name] = StackOffset;
    return std::to_string(StackOffset);
}

int getStack() {
    return StackPointer;
}

std::string storeLabel(std::string _returnLabel) {
    returnLabel = _returnLabel;
}

std::string getRetLab() {
    return returnLabel;
}


};



