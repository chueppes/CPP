
#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>

int error(std::string message){
    std::cout << "\033[0;31m";
    std::cout << message << std::endl;
    std::cout << "\033[0m";
    return(1);
}

void myReplaceWord(std::ofstream &outfile, std::string &s1, std::string &s2, std::string &line){
        
        size_t pos = 0;
        int len = s1.length();
        
        while((pos = line.find(s1, pos)) != std::string::npos){
            outfile << line.substr(0, pos) << s2;
            line = line.substr(pos + len);
            pos = 0;
        }
        outfile << line;
}

int main(int argc, char **argv){
    if (argc == 4){
        std::string fileName = argv[1];
        std::string s1 = argv[2]; 
        std::string s2 = argv[3];
        std::ifstream infile (argv[1]);
       

        if(!infile)
            return (error("An error has occured while opening the file."));
        if(!infile.is_open())
            return (error("Unable to read the file."));
        if(!s2.size() || !s1.size())
            return(error("The original and replace strings can't be empty."));
        std::ofstream outfile((fileName + ".replace").c_str());
        if(!outfile)
            return(error("An error has occurred while creating the outfile."));
        std::string line;
        while (std::getline(infile, line))
            myReplaceWord(outfile, s1, s2, line);
        infile.close();
        outfile.close();
        return 0;
    }
    else
        return(error("Wrong input. Try again.\n Remember: ./replace [filename] [word to be replaced] [word that will replace]\n"));
}

