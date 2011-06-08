CC=g++
FLAGS=
LIBS=-lm
OBJ=obj/wavelet.o

bin/wavelet: $(OBJ) src/main.cpp
	$(CC) $(FLAGS) $(LIBS) $(OBJ) src/main.cpp -o bin/wavelet

obj/wavelet.o: src/wavelet.cpp
	$(CC) $(FLAGS) $(LIBS) -c src/wavelet.cpp -o obj/wavelet.o
    
clean:
	rm obj/*.o bin/wavelet

run:
	bin/wavelet
    
