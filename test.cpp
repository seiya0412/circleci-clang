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
        queue_t q = generate_queue();
      }

      virtual ~QueueTest()
      {

      }

  }

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

TEST(QueueTest, DequeueWhenEmpty)
{

}
    
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
};