#include <fstream>
#include <iostream>
#include <unistd.h>

#include "cli.h"
#include "ast.hpp"

void compile(std::ostream &w)
{
    w << ".text" << std::endl;
    w << ".globl f" << std::endl;
    w << std::endl;

    w << "f:" << std::endl;
    w << "addi  t0, zero, 0" << std::endl;
    w << "addi  t0, t0,   5" << std::endl;
    w << "add   a0, zero, t0" << std::endl;
    w << "ret" << std::endl;
}

// TODO: uncomment the below if you're using Flex/Bison.
extern FILE *yyin;

/*
NOTES:

type "make clean"

type bin/c_compiler -S compiler_tests/default/test_RETURN.c -o test.s to run a specific test

*/


int main(int argc, char *argv[])
{
    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";
    if (parse_command_line_args(argc, argv, sourcePath, outputPath))
    {
        return 1;
    }

    // TODO: uncomment the below lines if you're using Flex/Bison.
    // This configures Flex to look at sourcePath instead of
    // reading from stdin.
    yyin = fopen(sourcePath.c_str(), "r");
    if (yyin == NULL)
    {
         perror("Could not open source file");
         return 1;
    }

    // Open the output file in truncation mode (to overwrite the contents)
    std::ofstream output;
    Context context;
    output.open(outputPath, std::ios::trunc);



    // Compile the input
    std::cout << "Compiling: " << sourcePath << std::endl;
    //compile(output);
    auto root = parseAST();

    root->visualise(std::cerr);
    //Context context;
    //10 is the output register (r10 = a0)
    //root->makeRISC(output, 10);
    root->makeRISC(output, context, "a0");
    std::cout << "Compiled to: " << outputPath << std::endl;


    output.close();
    return 0;
}
