OUT_NAME=executable
INSTALL_PATH=/usr/local/bin/$(OUT_NAME)

$(OUT_NAME): main.o
	g++ -v main.o -o ${OUT_NAME}
main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm -f *.o ${OUT_NAME}
install: $(OUT_NAME)
	sudo cp -vi ${OUT_NAME} ${INSTALL_PATH}
uninstall:
	sudo rm -vf ${INSTALL_PATH}
