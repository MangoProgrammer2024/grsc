/*
*  *precache.h*
*/

#include "utility.h"

typedef std::string precache;
typedef bool cachetrue;
typedef bool cachefalse;

typedef struct Cache{

Cache cache;

  void insertprecache(Cache(precache));
  void removeprecache(Cache(precache));

Cache * Allocate_Cache(){
Cache * C = (Cache*)malloc(sizeof(Cache));
  return C;
};

float cacherun;

};
