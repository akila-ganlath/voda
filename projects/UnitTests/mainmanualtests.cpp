#include <QApplication>

#include <gtest/gtest.h>

#include "manualtests.h"


int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
