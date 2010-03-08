/* vi: set sw=4 ts=4: */
/*
 * deamon-main.c
 *
 * This file is part of libsearchlibrary.
 *
 * Copyright (C) 2010 - kelvenxu <kelvenxu@gmail.com>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 * */

#include<stdio.h>
#include<signal.h>
#include<syslog.h>
#include<unistd.h>
#include<fcntl.h>
#include<time.h>
#include<sys/file.h>
#include<sys/ioctl.h>
#include<stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc,char *argv[])
{
    int childpid; 
		int fd; 
		int fdtablesize;
    int fp;
    
    signal(SIGTTOU,SIG_IGN);
    signal(SIGTTIN,SIG_IGN);
    signal(SIGTSTP,SIG_IGN);
    signal(SIGHUP,SIG_IGN);

    if (fork() != 0)
    {
        exit(1);
    }
        
    if ((fp=open("/dev/tty",O_RDWR)) >= 0)
    {
        ioctl(fp,TIOCNOTTY,NULL);
        close(fp);
    }

    if (fork() != 0)
    {
        exit(1);
    }
    
    if (chdir("/tmp") == -1)
    {
        exit(1);
    }

    for(fd=0,fdtablesize = getdtablesize(); fd < fdtablesize; fd++)
    {
        close(fd);
    }

    umask(0);
    signal(SIGCHLD,SIG_IGN);
		
    while (1)
    {
        syslog(LOG_USER|LOG_INFO,"当前: %s\n",getenv("HOME"));

        sleep(30);
    }

    return 0;
}

