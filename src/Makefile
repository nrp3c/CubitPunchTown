LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all: sfmlapp

main.o: main.cpp
		g++ -c "main.cpp" -o main.o

Entity.o: Entity.cpp
		g++ -c "Entity.cpp" -o Entity.o

Level.o: Level.cpp
		g++ -c "Level.cpp" -o Level.o

Enemies.o: Enemies.cpp
		g++ -c "Enemies.cpp" -o Enemies.o

Player.o: Player.cpp
		g++ -c "Player.cpp" -o Player.o

CubitGame.o: CubitGame.cpp
		g++ -c "CubitGame.cpp" -o CubitGame.o

sfmlapp: main.o Level.o Entity.o Enemies.o Player.o CubitGame.o
		@echo "** Building the game"
		g++ -o sfmlapp CubitGame.o Player.o main.o Entity.o Enemies.o Level.o $(LIBS)

clean:
		@echo "** Removing object files and executable..."
		rm -f *.o
