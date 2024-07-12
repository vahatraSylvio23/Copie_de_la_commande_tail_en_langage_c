void open(FILE **file , char* filename);
int arg_to_number(char* argument);
void tail_cmd(FILE *file, int nbr_of_line , char *str_line , int n);
int count_line(FILE* file ,char* str , int n);
int count_line_1(FILE* file ,char* str , int n);
void tail_v_option(FILE *file, int nbr_of_line , char *str_line , char *argument);