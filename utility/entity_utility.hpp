/*
*     *entity_utility.hpp*
*     *this file is used for handling world entities*
*/
#pragma once 

#define WORLD_ENTITY

#include "utility.hpp"
#include "common_utility.hpp"
#include <string>

std::string * Key;
std::string * value;

const char * world_classname;

std::string getent;

typedef class worldEntity{
public:

  void getkey(worldEntity e, std::string * key);
  void getvalue(worldEntity e, std::string * value);

};





