#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>

using namespace std;

int main(int argc, char *argv[])
{
    bool is_dir = false;
	
    if (argv[1] == argv[2])
    {
	cerr << "mv complete" << endl;
    }
    else
    {
        struct stat statbuf;
        if(stat(argv[2], &statbuf) == -1)
        {
            if(link(argv[1], argv[2])== -1)
                perror("linkfiles");
            if(unlink(argv[1])==-1)
                perror("unlinkfile");
        }

        else if((S_ISDIR(statbuf.st_mode)))
        {
            string path = argv[2] + '/';
            path += argv[1];
            if(link(argv[1], path.c_str() )== -1){
		perror("linkdir");
                return 1;
	}

            if(unlink(argv[1])==-1)
                perror("unlinkdir");

        }
        
        else
        {
            cerr << "cannot complete command" << endl;
        }
    }
	return 0;
}
