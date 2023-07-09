build:
	g++ -o bin/main *.cpp

run: build
	./bin/main