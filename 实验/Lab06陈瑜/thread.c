/*
 * =====================================================================================
 *
 *       Filename:  thread.c
 *
 *    Description:  This program is demostrate to how use library libpthread to create multi-pthread
 *    program
 *
 *        Version:  1.0
 *        Created:  2011年04月05日 14时42分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Liang Gang 
 *        Company:  Schuan University
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void thread(void)
{
	int i;
	
	for (i=0;i<3;i++)
		fprintf(stderr,"This is a pthread.\n");
}


int main(void)
{
	pthread_t id;
	int ret;
	int i;

	ret=pthread_create(&id,NULL,(void*)thread,NULL);

	if (0!=ret)
	{
		fprintf(stderr,"Create pthread error!\n");
		exit(-1);
	}

	for(i=0;i<3;i++)
		fprintf(stderr,"this is the main process.\n");
	pthread_join(id,NULL);

	return 0;


}
