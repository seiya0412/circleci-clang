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

bool enqueue(queue_t q, uint8_t data)
{
    if(is_full(q)) return false;

    q->buff[q->tail] = data;
    q->residual++;
    q->tail++;
    q->tail = q->tail % q->size;
    
    printf("%s: data=%u, buff=%u, res=%d, tail=%d\n"
            , __func__, data, q->buff[q->tail - 1]
            , q->residual, q->tail);
    return true;
}

bool dequeue(queue_t q, uint8_t *data)
{
    if(is_empty(q)) return false;

    *data = q->buff[q->head];
    q->residual--;
    q->head++;
    q->head = q->head % q->size;
    return true;
}

bool is_full(queue_t q)
{
    return (q->residual >= q->size);
}

bool is_empty(queue_t q)
{
    return (q->residual <= 0);
}