#include "iostream"

#define SPACE 0x20

void removeSpace(char in[], char out[], unsigned int length){

    char* p_out = out;

    for (int index = 0; index < length; index++)
    {   
        if(in[index] != SPACE){
            *p_out = in[index];
            p_out++;
        }
    }
}

void removeSpaceBegin(char in[], char out[], unsigned int length){
    bool begin = false;
    bool end = false;
    
    char* p_out = out;

    for (int index = 0; index < length; index++)
    {   
        if((in[index] != SPACE && !begin) || begin){
            *p_out = in[index];
            p_out++;

            begin = true;
        }
    }
}

int main(int argc, char const *argv[])
{
    char strIn[] = " String Test ";
    char strOut[14];

    unsigned int length = 14;

    bool init = false;

    std::cout << strIn << std::endl;

    removeSpace(strIn, strOut, length);

    std::cout << strOut << std::endl;

    removeSpaceBegin(strIn, strOut, length);

    std::cout << strOut << std::endl;    

    return 0;
}
