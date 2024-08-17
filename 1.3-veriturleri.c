#include <stdio.h>
#include <stdbool.h>

int main(){
    double d = 3.1415926535; //! 8 Bytes 14-15 basamağa kadar çıkar. (%lf)(Long Float)

    bool e = true; //! 1 Byte alan %d true yada false
    //! True = 1 ve False = 0
    char f = 120 ;  //!  1 Byte (-128 <--> +127) %d veya %c
    unsigned char g = 225; //! 1 Byte (0 <--> +225) %d veya %c

    short h = 32767; //! 2 Byte (-32.768 <--> +32.767) %d
    unsigned short d = 65535;
    
    int j =  2134678954; //! 4 Byte (-2.147.483.648 <---> +2.147.483.647)
    unsigned int s = 4; 
    long long int lng = 0; //! 8 Byte -9 quantilion ile +9 quantilion %lld
    unsigned long long int ulng= 0; //! 8 Byte 18 quantilion %llu
    
    return 0;
}