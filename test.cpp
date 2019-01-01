#include <gtest/gtest.h>
extern "C"
{
  #include "queue.h"
}

namespace{

  class QueueTest : public ::testing::Test
  {
    protected:
      QueueTest()
      {
        q1_ = allocate_queue(16);
      }

      virtual ~QueueTest()
      {

      }

      queue_t q1_;

  };

  TEST_F(QueueTest, IsAllocateSuccess)
  {
    queue_t q;
    q = allocate_queue(16);
    EXPECT_NE(q, NULL);
    EXPECT_TRUE(free_queue(q));

    q = allocate_queue(-1);
    EXPECT_EQ(q, NULL);
    EXPECT_FALSE(free_queue(q));
  }

  TEST_F(QueueTest, IsBufferNotNull)
  {
    EXPECT_TRUE(q1_->buff != NULL);
  }

  TEST_F(QueueTest, IsEmptyInitially)
  {
    EXPECT_EQ(0, q1_->tail);
    EXPECT_EQ(0, q1_->head);
    EXPECT_EQ(0, q1_->residual);
  }

  TEST_F(QueueTest, EnqueueWorks)
  {

  }

  TEST_F(QueueTest, DequeueWorks)
  {

  }

  TEST_F(QueueTest, EnqueueWhenFull)
  {

  }

  TEST_F(QueueTest, DequeueWhenEmpty)
  {

  }
}
    
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}