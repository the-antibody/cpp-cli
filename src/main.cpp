#include "cli.hpp"
#include "startup.hpp"

int main()
{
    // run startup
    startup();

    // enter cli
    cli::enter_cli();
}