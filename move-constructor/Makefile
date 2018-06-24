OUT_NAME=executable
INSTALL_PATH=/usr/local/bin/$(OUT_NAME)

$(OUT_NAME): main.o my_int.o
	g++ *.o -o executable
main.o: main.cpp
	g++ -c main.cpp -o main.o
my_int.o: my_int.cc
	g++ -c my_int.cc -o my_int.o

clean:
	rm -f *.o ${OUT_NAME}
install: executable
	sudo cp -vi ${OUT_NAME} ${INSTALL_PATH}
uninstall:
	sudo rm -vf ${INSTALL_PATH}
