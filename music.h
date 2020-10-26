//#include "digital_media.h"


class music : public digital_media
{
 public:
  char* getpublisher();
  float getduration();
  char* getartist();
  void setpublisher(char *);
  void setduration(int);
  void setartist(char *);

 private:
  char publisher [100];
  float duration;
  char artist [100];
};




