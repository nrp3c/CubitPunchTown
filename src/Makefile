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

player.o: player.cpp
		g++ -c "player.cpp" -o player.o

sfmlapp: main.o Level.o Entity.o Enemies.o player.o
		@echo "** Building the game"
		g++ -o sfmlapp player.o main.o Entity.o Enemies.o Level.o $(LIBS)

clean:
		@echo "** Removing object files and executable..."
		rm -f thegame *.o
