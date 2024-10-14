/*
*  *Utility.h*
*/

#include <string>

typedef struct Thread{

typedef std::string thread;

const char * gsrc_thread(Thread*) const;

int thread_pretick = 0;
float pretick;

enum util_type{
  trigger_script = 0,
  clip_script = 1,
  brush_script = 2,
  model_script = 3,
  entity_script = 4
};

//thread true function
Thread thread_true(bool thread(true));

void call_tick(Thread);
void append_type(Thread * type);

};

