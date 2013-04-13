#include<string>

class  Window
{
	public:
		std::string name;
		int width, height, x, y, id;
		
		/*Window& operator=(const Window& newWindow) 
		{
			// actual addition of rhs to *this
			this.name = newWindow.name;
			this.width = newWindow.width;
			this.height = newWindow.height;
			this.x = newWindow.x;
			this.y = newWindow.y;
			this.id = newWindow.id;
			return *this;
		}*/
};
