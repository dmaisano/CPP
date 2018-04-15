/*
* Domenico Maisano
* CS280
* Spring 2018
* 
* interpreter.h
*/

#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include "./parser.h"
using namespace std;

namespace Interpreter {

static void Interpret(istream *in, bool trace) {
  // stores a map of variables with their respective values
  map<string,Value> symbols;

  Parser::Parse(in, trace);
};

}

#endif
