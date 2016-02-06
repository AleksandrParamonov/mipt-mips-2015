/**
* main.cpp
* @author Aleksandr Paramonov <aleksandr.paramonov@phystech.edu>
* Copyright 2016 MIPT-MIPS
*/

#include <iostream> 
#include <func_sim.h>


int main( int argc, char** argv)
{
    if (argc != 3)
    {
        exit(EXIT_FAILURE);
    }

    MIPS* mips = new MIPS;
    mips->run( argv[1], strtol(argv[2], NULL, 10));
    cout << "yolo";
    return 0;
}