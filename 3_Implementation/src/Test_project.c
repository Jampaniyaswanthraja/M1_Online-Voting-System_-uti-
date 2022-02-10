/**
 * @file Test_project.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "project.h"
#include "unity.h"

void setUp(){}
void tearDown(){}


void test_reg_status(void)
{
TEST_ASSERT_EQUAL_INT(1,reg_status(223232323232));
TEST_ASSERT_EQUAL_INT(1,reg_status(210201020210));
TEST_ASSERT_EQUAL_INT(1,reg_status(181100302061));
TEST_ASSERT_EQUAL_INT(0,reg_status(000000000000));
TEST_ASSERT_EQUAL_INT(1,reg_status(000000000001));
TEST_ASSERT_EQUAL_INT(1,reg_status(961752821542));
}
void test_login_status(void)
{

TEST_ASSERT_EQUAL_INT(2,login_status(0));
TEST_ASSERT_EQUAL_INT(2,login_status(1));
TEST_ASSERT_EQUAL_INT(2,login_status(3));
TEST_ASSERT_EQUAL_INT(2,login_status(4));
TEST_ASSERT_EQUAL_INT(2,login_status(5));

}

void test_candidate_choose(void)
{
TEST_ASSERT_EQUAL_INT(2,candidate_choose(1,1));
TEST_ASSERT_EQUAL_INT(2,candidate_choose(1,3));
TEST_ASSERT_EQUAL_INT(3,candidate_choose(2,2));
TEST_ASSERT_EQUAL_INT(3,candidate_choose(1,2));
}

void test_symbol(void)
{
TEST_ASSERT_EQUAL_INT(3,symbol(3,3));
TEST_ASSERT_EQUAL_INT(3,symbol(2,3));
TEST_ASSERT_EQUAL_INT(1,symbol(2,2));
TEST_ASSERT_EQUAL_INT(1,symbol(1,2));
}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_reg_status);
  RUN_TEST(test_login_status);
  RUN_TEST(test_candidate_choose);
  RUN_TEST(test_symbol);

  return UNITY_END();
}
