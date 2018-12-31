#include <gtest/gtest.h>
extern "C"
{
#include "add.h"
}

TEST(SetAddTest, AddInsideOfRange)
{
  EXPECT_EQ(3, add(1,2));
  EXPECT_EQ(4, add(2,2));
}
    
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
