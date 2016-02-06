#include <func_sim.h>


MIPS::MIPS()
{
    HI = 0;
    LO = 0;
    rf = new RF;
}

MIPS::~MIPS()
{
    delete rf;
}

void RF::reset( RegNum index)
{
    array[ index] = 0;
}

void RF::write( RegNum index, uint32 data)
{
    if ( index != zero)
        array[ index] = data;
}

uint32 RF::read(RegNum index) const
{
    return array[ index];
}

RF::RF()
{
    int i;
    for (i = 0; i < MAX_REG; i++)
        reset( ( RegNum)i);
}

RF::~RF()
{

}