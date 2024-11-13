#include <iostream>
#include <fstream>
#include <string>
#include "Obras.hpp"
#include "File_manage.hpp"

using namespace std;

Obras ReadInfo()
{
    string titulo, autor, subGenero, midia; // variables for storing the data in the file save1.txt
    int anoPublicacao;

    ifstream infile;                    // file var
    infile.open("BANCO/Data_bank.txt"); // open file

    if (!infile)
    { // testing if opening went well
        cerr << "ERROR IN FILE: READ INFO" << std::endl;
        Obras failling("null", "null", "null", "null", 0);
        return failling;
    }

    // Read the file line by line and store the data
    infile >> titulo >> autor >> subGenero >> anoPublicacao >> midia;
    // position and progress
    Obras piece(titulo, autor, subGenero, midia, anoPublicacao); // after reading data, creates the piece again
    infile.close();                                              // close file

    return piece;
}
