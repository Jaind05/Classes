#ifndef MUSIC
#define MUSIC
#include "digital_media.h"


class music : public digital_media
{
  //add constructor id = 2
 public:
  music();
  char* getpublisher();
  int getduration();
  char* getartist();
  void setpublisher(char *);
  void setduration(int);
  void setartist(char *);

 private:
  char publisher [100];
  int duration;
  char artist [100];
};


#endif

