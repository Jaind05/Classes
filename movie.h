#ifndef MOVIE
#define MOVIE

#include "digital_media.h"

class movie : public digital_media
{
 
 public:
  movie();
  ~movie();
  char* getdirector();
  int getduration();
  float getrating();
  void setrating(float);
  void setduration(int);
  void setdirector(char *);

 private:
  char director [100];
  int duration;
  float rating;
};

#endif

