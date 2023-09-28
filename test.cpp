#include <iostream>
#include <fstream>

int main()
{
    std::ofstream output("output.txt");
    output << "write To File" << std::endl;

    return 0;
}
