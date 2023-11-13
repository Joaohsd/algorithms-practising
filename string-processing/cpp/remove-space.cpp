#include "iostream"

#define SPACE 0x20
#define NULL_CHAR 0x00

void removeAllSpaces(char in[], char out[], unsigned int length){
    for (int index = 0; index < length; index++)
    {   
        if(in[index] != SPACE){
            *out = in[index];
            out++;
        }
    }
}

void removeSpaceBegin(char in[], char out[], unsigned int length){
    bool begin = false;

    for (int index = 0; index < length; index++)
    {   
        if((in[index] != SPACE && !begin) || begin){
            *out = in[index];
            out++;

            begin = true;
        }
    }
}

void removeSpaceEnd(char in[], char out[], unsigned int length){
    bool end = false;

    out = out + length - 1;

    for (int index = length - 1; index >= 0; index--)
    {   
        if(in[index] == NULL_CHAR && !end){
            *out = in[index];
            out--;
        }
        else if(in[index] == SPACE && !end){
            *out = NULL_CHAR;
            out--;
        }
        else if(in[index] != SPACE && !end){
            *out = in[index];
            out--;
            end = true;
        }
        else{
            *out = in[index];
            out--;
        }
    }
}

void removeSpaceBeginEnd(char in[], char out[], unsigned int length){
    removeSpaceBegin(in, out, length);
    removeSpaceEnd(out, out, length);
}

int main(int argc, char const *argv[])
{
    char strIn[] = " String Test ";
    char strOut[14];

    unsigned int length = 14;

    bool init = false;

    std::cout << strIn << std::endl;

    removeAllSpaces(strIn, strOut, length);

    std::cout << strOut << std::endl;

    removeSpaceBegin(strIn, strOut, length);

    std::cout << strOut << std::endl;

    removeSpaceEnd(strIn, strOut, length);

    std::cout << strOut << std::endl;  

    removeSpaceBeginEnd(strIn, strOut, length);

    std::cout << strOut << std::endl;

    return 0;
}
