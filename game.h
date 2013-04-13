#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <cstring>
#include<iostream>
#include<string>
#include<vector>

#include "Window.h"

class Game
{
	private:
		static int const initFrameRate = 30;		
		std::string defaultWindowName;
		static const int defaultWindowWidth = 800, defaultWindowHeight = 600, defaultWindowX = 10, defaultWindowY = 10;
		std::vector<Window> window;
		int windows;
		int time;
		int fps;//current frame rate
		int frameRate;//set speed of game
	
	protected:
		
	public:
		void Initialise();
		void setMousePosition(int x, int y);
		//Game();
		virtual void Update();
		virtual void Draw();
		virtual void mouseLeftDown(int x, int y);
		virtual void mouseRightDown(int x, int y);
		int createWindow();
		int createWindow(Window);
		int createWindow(int, int, int, int, std::string);
		Window defaultWindow();
		//void setFont(void*);
		//void drawText(float, float, char[]);

		int mouseX, mouseY;
		bool leftHeld, rightHeld;
				
};	
