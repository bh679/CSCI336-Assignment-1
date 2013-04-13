#include"GUIElements.h"
#include <vector>

class BarGraph
{
	public:
	BarGraph(float, float, float, float, float, float, float, float);
	void setData(std::vector<Position>,std::vector<Position>);
	void Draw();

	std::vector<Position> data, data2;
	std::vector<Position>::iterator it;
	float x, y, width, height,
	xMin, xMax, yMin, yMax;
};
