#!/bin/sh

g++ -o test `pkg-config --cflags --libs opencv` test.cpp

