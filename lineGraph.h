
#include "GUIElements.h"
#include <vector>
#include <iostream>

//		const float boarderBuffer = 0.1;
class LineGraph
{
	private:

	public:

	LineGraph();
	LineGraph(float x,float y,float width,float height, float xMin, float xMax, float yMin, float yMax);

	float x, y, width, height;
	void Initialise();
	void setData(std::vector<Position>, std::vector<Position>);
	void Draw();
        void drawHorizontalBars(float x, float y, float length, int bars, float distance);
        void drawHorizontalBars(float x, float y, float length, int bars, float distance, float bottomNumber, float topNumber);
        void drawVerticalBars(float x, float y, float length, int bars, float distance);
        void drawVerticalBars(float x, float y, float length, int bars, float distance, float leftNumber, float rightNumber);
        void drawGraph(float x, float y, float width, float height, float valueXMin, float valueXMax, float valueYMin, float valueYMax);
	void addPoint(int x, int y);
	void drawPoints(float x, float y, std::vector<Position> data, int);
	int lines(float, float);

        /*std::vector<*/std::vector<Position> /*>*/ data;
        /*std::vector<*/std::vector<Position> /*>*/ data2;
	std::vector<Position>::iterator it;
	int currentDataVector;
	int xLines, yLines;
	float xMin, xMax, yMin, yMax;
};
