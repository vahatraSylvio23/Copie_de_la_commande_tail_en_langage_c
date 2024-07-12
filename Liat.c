#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file.h"
//FILE* file();
int main(int argc , char *argv[])
{ 
	//char *fich;
	int n , ar_t_num, line;
	char parametre[100];
	FILE *file;
    char *number;
    char *verbose;
    number="-n";
    verbose="-v";

    /*---------------------------------------------------------------------------*/
    //l'option -n de tail
    if(argv[1] = "-n")
    {
    open(&file ,argv[3]);
    n = arg_to_number(argv[2]);
    line = count_line(file , parametre , n);
    open(&file ,argv[3]);
    tail_cmd(file ,line , parametre ,n);
        }
        
    /*-------------------------------------------------------------------------*/
    //option -v de tail
    else if(argv[1] = "-v")
    {
        int line;
        open(&file ,argv[2]);
        line = count_line_1(file , parametre , 10);
        tail_v_option(file , line , parametre , argv[1]);
        }
        else
        {
            exit(EXIT_FAILURE);
        }

        return (0);
	}
