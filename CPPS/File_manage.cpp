#include <iostream>
#include <fstream>
#include <string>
#include "Obras.hpp"
#include "File_manage.hpp"

using namespace std;

Obras ReadInfo(){
    string name; //variables for storing the data in the file save1.txt 
    int badges, money, level;

    ifstream infile; //file var
    infile.open("BANCO/Data_bank.txt"); //open file

    if (!infile) { // testing if opening went well
        cerr << "ERROR IN FILE: READ INFO" << std::endl;
        Obras failling("file error", );
        return failling;
    }

    // Read the file line by line and store the data
    infile >> name >> badges >> money >> level;
   //position and progress 
    Obras player(name, badges, level, money); // after reading data, creates the player again
    infile.close(); //close file
    
    return player;
}

bool WriteTrainerInfo(Trainer player){
    ofstream outfile;
    outfile.open("TXTS/save1.txt");

    if(!outfile) {
        cerr << "ERROR IN FILE: TRAINER WRITE" << endl;
        return false;
    }

    outfile << player.getname() << " ";
    outfile << player.getbadges() << " ";
    outfile << player.getmoney() << " ";
    outfile << player.getlevel() << endl;
   //position and progress 
    outfile.close();

    cout << "DATA SAVED" << endl;
    
    return true;
}

bool ReadTeamInfo(){
    ifstream infile;
    infile.open("TXTS/team_save1.txt");

    if (!infile) {
        cerr << "ERROR IN FILE: TEAM READ" << std::endl;
        return false;
    }
    string name;
    string type;
    string subtype;
        
    int level;
    int xp;
    int stage;

    bool shiny;
    bool mythical;
    bool legendary;
    bool evolve;
//  terminar leitura com while 
    
    return true; 
}

bool WriteTeamInfo(){
    return true;
}

