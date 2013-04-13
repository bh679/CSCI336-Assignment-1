#include "game.h"
#include "GUIElements.h"
#include "lineGraph.h"
#include "BarGraph.h"
#include "PieChart.h"

#include <iostream>
class Ass1 : public Game
{
	public: 
	virtual void Initialise();
	virtual void Update();
	virtual void Draw();
	virtual void mouseLeftDown(int x, int y);
	virtual void mouseRightDown(int x, int y);
	void drawPiGraph();
	LineGraph *lineGraph;
	BarGraph *barGraph;
	PieChart *pieChart;
	PieChart *pieChart2;
	/*void drawLineGraph();
	void drawHorizontalBars(float x, float y, float length, int bars, float distance);
	void drawHorizontalBars(float x, float y, float length, int bars, float distance, float bottomNumber, float topNumber);
	void drawVerticalBars(float x, float y, float length, int bars, float distance);
	void drawVerticalBars(float x, float y, float length, int bars, float distance, float leftNumber, float rightNumber);
	void drawGraph(float x, float y, float width, float height, float valueXMin, float valueXMax, float valueYMin, float valueYMax);

	vector<Position> lineGraph;*/
        std::vector<Position>  data, data2;
	std::vector<Position>::iterator it;
};
