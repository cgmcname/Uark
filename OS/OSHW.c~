#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>

#define BUFFER_SIZE 5

//      Christopher McNames



//const int BUFFER_SIZE = 5;
typedef int buffer_item;
buffer_item buffer[BUFFER_SIZE];

int pHold;

pthread_mutex_t mutex;

sem_t empty;

sem_t full;

pthread_attr_t attr;


pthread_t id1, id2;

 



void setup() 
{
	pthread_mutex_init(&mutex, NULL);

	sem_init(&full, 0, 0);
	sem_init(&empty, 0, BUFFER_SIZE);

	pthread_attr_init(&attr);

	pHold = 0;
}


void *producer(void *param) 
{
   
   buffer_item item;

   while(1) 
   {
     
      int stimep = (rand() % 5) ;
      sleep(stimep);

      
      item = rand();

      
      sem_wait(&empty);
     
      pthread_mutex_lock(&mutex);

       if(pHold < BUFFER_SIZE) 
	   {
			buffer[pHold] = item;
			pHold++;
			printf("Producer produced %d\n", item);
	   }
      
	  
      pthread_mutex_unlock(&mutex);
      
      sem_post(&full);
   }
}

void *consumer(void *param) 
{
   
   buffer_item item;

   while(1) 
   {
      
      int stimec = (rand() % 5) ;
      sleep(stimec);

      // get sem lock
      sem_wait(&full);
      // get mutex lock
      pthread_mutex_lock(&mutex);
       
	   if(pHold > 0) 
		{
			item = buffer[(pHold-1)];
			pHold--;
			printf("Consumer consumed %d\n", item);
		}
      
	  // unlock
      pthread_mutex_unlock(&mutex);
      //empty
      sem_post(&empty);
   }
}

int main(int argc, char *argv[]) 
{
   int i;

   int sleeptime = atoi(argv[1]); 
   int producerThreads = atoi(argv[2]); 
   int consumerThreads = atoi(argv[3]); 

   
	setup();

	
   // producerThreads 
   for(i = 0; i < producerThreads; i++) 
   {
      pthread_create(&id1,&attr,producer,NULL);
   }

   // consumerThreads
   for(i = 0; i < consumerThreads; i++) 
   {
      pthread_create(&id2,&attr,consumer,NULL);
   }

   
   
   pthread_exit( &id1);
   pthread_exit( &id2);

   
   exit(0);
}
