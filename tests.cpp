#include <gtest/gtest.h>
#include <string>

int countVowels(std::string str);

TEST(CountVowelsTest, BasicTests) {
    EXPECT_EQ(countVowels("hello"), 2);
    EXPECT_EQ(countVowels("eyuio"), 5);
    EXPECT_EQ(countVowels(""), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
