#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2) {
	std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    std::string junk, date;
    getline(fin, junk);

    double eastSt, eastEl, westSt, westEl;
    bool start = false
    std::vector<std::string> arrDate;
    std::vector<double> arrWestEl;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
    
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 

        if (date1.compare(date) == 0) {
            start = true;
        }

        if (date2.compare(date)) 
            start = false;
        }
    }


    fin.close();
}