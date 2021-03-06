#include <time.h>

typedef struct data_struct
{
	time_t time; //Time stamp
	char type; //Message type (I/W/E/F)
	char * string; //Message string
} data_t;

int addmsg(const char type, const char * msg);
void clearlog();
char * getlog();
itn savelog (char * filename);
