#ifndef MOVIE
#define MOVIE

//#include "digital_media.h"

class movie : public digital_media
{
 public:
  virtual char* getdirector();
  virtual int getduration();
  virtual float getrating();
  virtual void setrating(float);
  virtual void setduration(int);
  virtual void setdirector(char *);

 private:
  char director [100];
  int duration;
  float rating;
};

#endif

