#include "handler.hpp"

#include <iostream>
#include <stdlib.h>

#include "commands/testcommand.hpp"

// code enum
typedef enum
{
    test
} 
code;

/**
 * @brief Convert a string input to it's enum value
 * 
 * @param input - the string 
 * @return code 
 */
code to_enum(std::string input)
{
    // code buffer
    code code;

    // switch
    if (input == "test") code = test;

    return code;
}

/**
 * @brief Run a command
 * 
 * @param input - the command name
 * @param argc - the argument count
 * @param argv - the argument array
 */
void handler::run(std::string input, int argc, std::string argv[])
{
    // get code
    code code = to_enum(input);

    // switch code
    switch (code)
    {
        // test command
        case test:
            testcommand::execute(argc, argv);
            break;
        // command is unknown
        default:
            std::cout << "Unknown command." << std::endl;
            break;
    }
}