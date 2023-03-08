/* ************************************************************************
> File Name:     test.cpp
> Author:        Yanwen Xia
> Email: 18252677381@163.com
> Created Time:  2023年03月08日 星期三 15时45分27秒
> Description:   
 ************************************************************************/
#include<gtest/gtest.h>
 
int add(int a,int b)
{
    return a+b;
}
 
TEST(testCase,test0)
{
    EXPECT_EQ(add(2,3),5);
}
int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
