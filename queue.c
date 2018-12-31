#include "queue.h"


bool allocate_queue(queue_t q, int32_t size)
{
    if(size <= 0)
    {
        return false;
    }

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

bool free_queue(queue_t q)
{
    if(q != NULL)
    {
        free(q);
        return true;
    } 
    return true;
}

void enqueue()
{

}

void dequeue()
{

}