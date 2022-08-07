# cpp-cli
CC = g++
FILES = src/main.cpp src/handler.cpp src/cli.cpp
OUT = bin
NAME = cpp-cli

build:
	$(CC) $(FILES) -o $(OUT)/$(NAME)