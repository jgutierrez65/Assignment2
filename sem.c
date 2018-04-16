/**
* Semaphore program to assign 5 licences of an application to users
* Only 5 users can check out the application at a time
* If more than 5 attempt to check out the application they will wait until a license frees up
*/





#include <semaphore.h>

sem_t checkout;

int main() {
	sem_init(&checkout, 0, 5);	// 5 licenses to checkout.
	
}


int assign() {
 	sem_wait(&checkout);            // Each wait will checkout  a license and remove an available instance

}


int release() {
        sem_post(&checkout);            // Returning a license will add an available license for future use.


}

