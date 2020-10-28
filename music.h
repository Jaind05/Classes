#ifndef MUSIC
#define MUSIC

//#include "digital_media.h"


class music : public digital_media
{
 public:
  virtual char* getpublisher();
  virtual int getduration();
  virtual char* getartist();
  virtual void setpublisher(char *);
  virtual void setduration(int);
  virtual void setartist(char *);

 private:
  char publisher [100];
  int duration;
  char artist [100];
};


#endif

