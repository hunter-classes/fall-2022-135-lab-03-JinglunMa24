// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

double get_east_storage(std::string input) {
	std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    std::string junk, date;
    getline(fin, junk);

    double eastSt, eastEl, westSt, westEl, output;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
    
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 

        if (input.compare(date) == 0) {
            output = eastSt;
        }
    }

    fin.close();

    return output;
}


double get_min_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    std::string junk, date;
    getline(fin, junk);

    double eastSt, eastEl, westSt, westEl, output;
    bool min = true;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
    
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, ignorring the remaining columns 

        if (min) {
            output = eastSt;
            min = false;
        }

        if (output > eastSt&& !min) {
            output = eastSt;
        }
    
    }

    fin.close();

    return output;
}


double get_max_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    std::string junk, date;
    getline(fin, junk);

    double eastSt, eastEl, westSt, westEl, output;
    bool max = true;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
    
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, ignorring the remaining columns 

        if (max) {
            output = eastSt;
            max = false;
        }
        
        if (output < eastSt && !max) {
            output = eastSt;
        }
    }

    fin.close();

    return output;
}