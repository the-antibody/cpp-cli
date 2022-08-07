#include <iostream>

class testcommand
{
    public:
        /**
         * @brief Execute the command
         * 
         * @param argv - potential arguments
         */
        static void execute(int argc, std::string argv[])
        {
            // print
            std::cout << "This is the test command." << std::endl;
            std::cout << "The arguments for this command were:" << std::endl;

            // print args
            for (auto i = 0; i < argc; i++)
                std::cout << " - " << argv[i] << std::endl;;
        }
};