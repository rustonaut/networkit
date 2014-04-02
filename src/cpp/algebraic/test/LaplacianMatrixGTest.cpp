/*
 * LaplacianMatrixGTest.cpp
 *
 *  Created on: 25.03.2014
 *      Author: Michael Wegner (michael.wegner@student.kit.edu)
 */

#include "LaplacianMatrixGTest.h"

LaplacianMatrixGTest::LaplacianMatrixGTest() {
}

LaplacianMatrixGTest::~LaplacianMatrixGTest() {
}

TEST(LaplacianMatrixGTest, trySmallLaplacianMatrix) {
	NetworKit::Graph graph(6);
	graph.addEdge(0, 0); // self-loop
	graph.addEdge(0, 1);
	graph.addEdge(0, 4);
	graph.addEdge(1, 4);
	graph.addEdge(1, 2);
	graph.addEdge(2, 3);
	graph.addEdge(3, 4);
	graph.addEdge(3, 5);

	LaplacianMatrix laplacianMatrix(graph);
	ASSERT_EQ(graph.numberOfNodes(), laplacianMatrix.numberOfRows());
	ASSERT_EQ(graph.numberOfNodes(), laplacianMatrix.numberOfRows());

	EXPECT_EQ(2, laplacianMatrix(0,0));
	EXPECT_EQ(-1, laplacianMatrix(0,1));
	EXPECT_EQ(0, laplacianMatrix(0,2));
	EXPECT_EQ(0, laplacianMatrix(0,3));
	EXPECT_EQ(-1, laplacianMatrix(0,4));
	EXPECT_EQ(0, laplacianMatrix(0,5));
	EXPECT_EQ(3, laplacianMatrix(1,1));
	EXPECT_EQ(-1, laplacianMatrix(1,2));
	EXPECT_EQ(0, laplacianMatrix(1,3));
	EXPECT_EQ(-1, laplacianMatrix(1,4));
	EXPECT_EQ(0, laplacianMatrix(1,5));
	EXPECT_EQ(2, laplacianMatrix(2,2));
	EXPECT_EQ(-1, laplacianMatrix(2,3));
	EXPECT_EQ(0, laplacianMatrix(2,4));
	EXPECT_EQ(0, laplacianMatrix(2,5));
	EXPECT_EQ(3, laplacianMatrix(3,3));
	EXPECT_EQ(-1, laplacianMatrix(3,4));
	EXPECT_EQ(-1, laplacianMatrix(3,5));
	EXPECT_EQ(3, laplacianMatrix(4,4));
	EXPECT_EQ(0, laplacianMatrix(4,5));
	EXPECT_EQ(1, laplacianMatrix(5,5));
}
