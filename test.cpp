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
        bool alloc_success = allocate_queue(q1_, 16);
      }

      virtual ~QueueTest()
      {

      }

      queue_t q1_;

  };

  TEST_F(QueueTest, IsAllocateSuccess)
  {
    queue_t q;
    EXPECT_TRUE(allocate_queue(q, 16));
    EXPECT_TRUE(allocate_queue(q, 100));
    EXPECT_FALSE(allocate_queue(q, 0));
    EXPECT_FALSE(allocate_queue(q, -1));
  }

  TEST_F(QueueTest, IsBufferNotNull)
  {
    EXPECT_NE(NULL, q1_->buff);
  }

  TEST_F(QueueTest, IsEmptyInitially)
  {
    EXPECT_EQ(0, q1_->size);
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