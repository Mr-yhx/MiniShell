#include "MKDIR.h"
#include<iostream>
#include<string>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

using namespace std;

MKDIR::MKDIR(string params)
{
	dir = params;

	cout << dir << endl;
}

void  MKDIR::run()
{

    if(mkdir(dir.c_str(),O_CREAT|0600) == -1) //dir真真真
                                      //O_CREAT真真真真真�0600真真真真真真
    {
            perror("mkdir error");
    }
    cout<<"真�mkdir"<<endl;
}


