// S. Trowbridge 2024
#include <iostream>
#include <fstream>                              // required for ifstream/ofstream objects

int main( ) {
    std::cout << std::endl;

    std::ifstream file("data.csv");             // open a file in the same directory                      

    std::string line;                           // variable to store a line of text

    while( std::getline(file, line) ) {         // read a file one line at a time  
        std::cout << line << "\n";              // print the current line of text
    }

    file.close();                               // close the file      

    std::cout << std::endl;
    return 0;
}
