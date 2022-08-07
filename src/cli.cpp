#include "cli.hpp"

#include <iostream>
#include <stdlib.h>
#include <sstream>

#include "handler.hpp"

/**
 * @brief Enter the CLI
 */
void cli::enter_cli()
{
    // get input buffer
    std::string input;

    // get line
    while (getline(std::cin, input))
    {
        // check if input is exit
        if (input == "exit")
        {
            // clear screen and exit
            system("clear");
            exit(0);
            break;
        }

        // split into arguments
        std::string argv[500];
        std::stringstream ss(input);

        int argc = 0;
        while (ss.good())
        {
            ss >> argv[argc];
            argc++;
        }

        // get command name
        std::string name = argv[0];

        // run command
        handler::run(name, argc, argv);

        // print command starter
        std::cout << ">> ";
    }
}