#include<gtest/gtest.h>
#include"BusinessLogic.h"
#include "Person.h"

class PersonTestFixture : public ::testing::Test {
protected:
    void SetUp()override
    {
        m_person = new Person("Santosh", 5.4);
    }

    void TearDown() override
    {
        if (m_person)
        {
            delete m_person;
        }
    }

protected:
    Person* m_person;

};

TEST_F(PersonTestFixture, Test1) {
    EXPECT_STREQ(m_person->GetName(), "Santosh");
}
TEST_F(PersonTestFixture, Test2) {
    EXPECT_EQ(m_person->GetHeight(), 5.4);
}