#include "queue.h"


bool allocate_queue(queue_t q, uint16_t size)
{
    q = malloc(sizeof(queue_struct));
    if(q != NULL)
    {
        q->size = size;
        q->residual = 0;
        q->head = 0;
        q->tail = 0;
        q->buff = malloc(sizeof(q->buff[0]) * size);
        if(q->buff != NULL)
        {
            return true; 
        }

    }
    free(q);
    return false;
}

void enqueue()
{

}

void dequeue()
{

}