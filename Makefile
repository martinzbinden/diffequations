CC=g++

all:
	$(CC) HelloWorldApp.cpp `wx-config --libs` `wx-config --cxxflags` -o HelloWorldApp
	$(CC) gridTest.cpp `wx-config --libs` `wx-config --cxxflags` -o gridTest
