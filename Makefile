CFLAGS = -std=c++11 -Wall -Wfatal-errors -Weffc++ -c 
LDFLAGS	= -fopenmp -lpng -lm

NLMeans : bin/nlmeans_ipol.o bin/libdenoising.o bin/io_png.o bin/libauxiliar.o bin/mt19937ar.o
	g++ bin/nlmeans_ipol.o bin/libdenoising.o bin/io_png.o bin/libauxiliar.o bin/mt19937ar.o -o NLMeans $(LDFLAGS) 

bin/mt19937ar.o: ./src/mt19937ar.cpp ./include/mt19937ar.h 
	g++ $(CFLAGS) ./src/mt19937ar.cpp -o bin/mt19937ar.o $(LDFLAGS) 
bin/libauxiliar.o: ./src/libauxiliar.cpp ./include/libauxiliar.h ./include/mt19937ar.h
	g++ $(CFLAGS) ./src/libauxiliar.cpp -o bin/libauxiliar.o $(LDFLAGS) 
bin/io_png.o: ./src/io_png.cpp ./include/io_png.h 
	g++ $(CFLAGS) ./src/io_png.cpp -o bin/io_png.o $(LDFLAGS) 
bin/libdenoising.o: ./src/libdenoising.cpp ./include/libdenoising.h ./include/libauxiliar.h
	g++ $(CFLAGS) ./src/libdenoising.cpp -o bin/libdenoising.o $(LDFLAGS) 
bin/nlmeans_ipol.o: ./src/nlmeans_ipol.cpp ./include/libdenoising.h ./include/io_png.h
	g++ $(CFLAGS) ./src/nlmeans_ipol.cpp -o bin/nlmeans_ipol.o $(LDFLAGS) 

clean:
	-rm bin/*.o
	-rm NLMeans