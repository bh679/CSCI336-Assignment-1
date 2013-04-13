#CC=clang++
CC=g++
FLAGS=-framework GLUT -framework OpenGL -o game

all: 
	$(CC) $(FLAGS) main.cpp game.cpp Ass1.cpp GUIElements.cpp lineGraph.cpp PieChart.cpp barGraph.cpp 
