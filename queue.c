#include "queue.h"


queue_t allocate_queue(int32_t size)
{
    queue_t q;
    if(size <= 0)
    {
        return NULL;
    }

    q = (queue_t)malloc(sizeof(queue_struct));
    if(q != NULL)
    {
        q->size = size;
        q->residual = 0;
        q->head = 0;
        q->tail = 0;
        q->buff = (uint8_t *)malloc(sizeof(q->buff[0]) * size);
        if(q->buff != NULL)
        {
            return q; 
        }

    }
    free(q);
    return NULL;
}

bool free_queue(queue_t q)
{
    if(q != NULL)
    {
        free(q);
        return true;
    } 
    return false;
}

void enqueue()
{

}

void dequeue()
{

}