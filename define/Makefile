EXE=executable
CFLAGS=-std=c++11 -Wall 
INSTALL_PATH=/usr/local/bin/$(EXE)

all: $(EXE)

$(EXE): main.o
	g++ $(CFLAGS) main.o -o $(EXE)
main.o: main.cpp
	g++ $(CFLAGS) -c main.cpp -o main.o


clean:
	rm -rf *.o $(EXE)
install: $(EXE)
	sudo cp -vi $(EXE) $(INSTALL_PATH)
uninstall:
	sudo rm -vf $(INSTALL_PATH)
rebuild: clean $(EXE)
