/**
* Monitor program using semaphores
* Structure is created since there is no monitor functions in C
* 
*/


#include <stdio.h>
#include <semaphore.h>

struct monitor {
	sem_t checkout;
	sem_t hold;
	int counter;
	int busy;
};

// checkout function


// block/hold function


// checkin function
	
	
