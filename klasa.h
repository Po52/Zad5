#pragma once
#include <string>

class druzyna
{
    public:

        int Punkty()
        {
            return wins*3+draw*1;
        }

        std::string nazwa="";
        int wins=0;
        int loses=0;
        int draw=0;
        int bramki=0;
        int Sbramki=0;
};
