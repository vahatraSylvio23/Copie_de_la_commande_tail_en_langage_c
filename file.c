#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"
void open(FILE** file , char* filename)
{
	*file=fopen(filename ,"r");
	if(file == NULL)
	{
			printf("Impossibe d'ouvrir le fichier\n");		
		}
	}

int arg_to_number(char* argument)
{	
	int n;
	n=(atoi)(argument);
	return (n);
	}

int count_line(FILE* file ,char* str , int n)
{
	int nbr_of_line;
	nbr_of_line = 1;
	while(feof(file) != 1)
	{
		fgets(str , 254 , file);
		nbr_of_line++;
	}
		nbr_of_line = nbr_of_line -n;
		fclose(file);
		return (nbr_of_line);
	}

void tail_cmd(FILE *file, int nbr_of_line , char *str_line , int n)
{
	int inc ,i ;
	inc=1;
	while(feof(file) != 1)
	{
		fgets(str_line , 255 , file);
		if(inc < nbr_of_line)
		{

			}
		else
		{
			printf("%s",str_line);			
			}
		inc++;
			}
	
	//fclose(file);
}

void tail_v_option(FILE *file ,int nbr_of_line  ,char* str_line , char *argument)
{
	int i;
	i=1;
	argument="-v";
	//strcmp
	printf("==>%s<==",argument);
	while(feof(file) != 1)
	{
		fgets(str_line , 256 , file);
		if(i < nbr_of_line)
		{

		}
		else
		{
			printf("%s",str_line);			
			}
		i++;
			}
	

	}
int count_line_1(FILE* file ,char* str ,int n)
{
	int nbr_of_line;
	n=10;
	nbr_of_line = 1;
	while(feof(file) != 1)
	{
		fgets(str , 254 , file);
		nbr_of_line++;
	}
		nbr_of_line = nbr_of_line -n;
		//fclose(file);
		return (nbr_of_line);
	}
