#!/bin/sh

g++ test.cpp `pkg-config --cflags --libs opencv` -o test

