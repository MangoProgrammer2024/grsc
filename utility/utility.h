/*
*  *Utility.h*
*/

#include <string>

typedef class Thread{
public:

typedef std::string thread;

const char * gsrc_thread(Thread*) const;

int thread_pretick = 0;

enum util_type{
  trigger_script = 0,
  clip_script = 1,
  brush_script = 2,
  model_script = 3,
  entity_script = 4
};

Thread thread_true(thread);


};

