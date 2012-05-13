#include <stdio.h>
#include "sndfile.h"

int main(int argc, char **argv)
{
    char buf [1024] ;

    sf_command (NULL, SFC_GET_LIB_VERSION, buf, sizeof (buf)) ;
    puts (buf) ;
    printf("\nhello world\n");

    return 0 ;
}
