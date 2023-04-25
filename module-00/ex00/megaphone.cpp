#include <iostream>

int main(int argc, char **argv){
    if(argc == 1){
        std::cout << "*LOUD AND UNBERABLE FEEDBACK NOISE*";
        return (0);
    } 
        for(int i=1; i < argc; i++){
            int j=0;
            while (argv[i][j])
                std::cout << char(toupper(argv[i][j++]));
        }
        std::cout << std::endl;
    return(0);
}