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
        q1_ = generate_queue();
      }

      virtual ~QueueTest()
      {

      }

      queue_t q1_;

  };

  TEST_F(QueueTest, EnqueueWorks)
  {

  }

  TEST_F(QueueTest, DequeueWorks)
  {

  }

  TEST_F(QueueTest, IsEmptyInitially)
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