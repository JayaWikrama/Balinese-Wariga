#include <iostream>

#include "wariga.hpp"

int main(int argc, char **argv){
    char *buffer = NULL;
    if (argc < 2){
        printf("cmd: %s <YYYY-MM-DD>\n", argv[0]);
        exit (0);
    }
    Wariga wariga;
    int ret = wariga.setup(argv[1]);
    if (!ret){
        std::cout << "wuku [" << wariga.getPawukonUrip() << "]: " << wariga.getPawukonStr() << std::endl;
        std::cout << "eka Wara [" << wariga.ekaWara.getUrip() << "]: " << wariga.ekaWara.getName() << std::endl;
        std::cout << "dwi Wara [" << wariga.dwiWara.getUrip() << "]: " << wariga.dwiWara.getName() << std::endl;
        std::cout << "tri Wara [" << wariga.triWara.getUrip() << "]: " << wariga.triWara.getName() << std::endl;
        std::cout << "catur Wara [" << wariga.caturWara.getUrip() << "]: " << wariga.caturWara.getName() << std::endl;
        std::cout << "panca Wara [" << wariga.pancaWara.getUrip() << "]: " << wariga.pancaWara.getName() << std::endl;
        std::cout << "sad Wara [" << wariga.sadWara.getUrip() << "]: " << wariga.sadWara.getName() << std::endl;
        std::cout << "sapta Wara [" << wariga.saptaWara.getUrip() << "]: " << wariga.saptaWara.getName() << std::endl;
        std::cout << "asta Wara [" << wariga.astaWara.getUrip() << "]: " << wariga.astaWara.getName() << std::endl;
        std::cout << "sanga Wara [" << wariga.sangaWara.getUrip() << "]: " << wariga.sangaWara.getName() << std::endl;
        std::cout << "dasa Wara [" << wariga.dasaWara.getUrip() << "]: " << wariga.dasaWara.getName() << std::endl;
    }
    else {
        std::cout << "Invalid Format dengan return: " << ret << std::endl;
        printf("cmd: %s <YYYY-MM-DD>\n", argv[0]);
    }
    return 0;
}
