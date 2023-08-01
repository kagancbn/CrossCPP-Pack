#include <spdlog/spdlog.h>
#include<lib/world/world.h>
int main()
{
    // We will use spdlog to say hello! 
    // So that you can see that conan works :-)
    spdlog::warn("{}",HW::Greeting());
    spdlog::critical("!!!!");
}
