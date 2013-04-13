#include "GUIElements.h"
#include <vector>


class PieChart
{
	public:
	PieChart(std::vector<Position>);
	void setData(std::vector<Position>);
	void setPosition(float x, float y, float width, float height);
	void Draw();

	float x, y, width, height;
	std::vector<Position> data;	
	std::vector<Position>::iterator it;
};
