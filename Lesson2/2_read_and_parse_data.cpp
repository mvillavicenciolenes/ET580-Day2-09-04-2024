// S. Trowbridge 2024
#include <iostream>
#include <fstream>                                  // required for ifstream/ofstream file bjects
#include <sstream>                                  // used for parsing and conversion

int main( ) {
    std::cout << std::endl;

    std::ifstream file("data_1.csv");               // open a file in the same directory                      

    std::string line;                               // variable to store text

    while( std::getline(file, line) ) {             // read one line of the file into the variable line
        std::string token;                          // variable to store a token of data
        std::stringstream parser(line);             // variable to parse the line of text

        while( std::getline(parser, token, ',')) {  // extract each token of data from the line of text
            std::cout << token << "\n";             // print each token of data
        }
    }

    file.close();                                   // close the file     

    std::cout << std::endl;
    return 0;
}
