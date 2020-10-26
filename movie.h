//#include "digital_media.h"

class movie : public digital_media
{
 public:
  char* getdirector();
  float getduration();
  float getrating();
  void setrating(float);
  void setduration(int);
  void setdirector(char *);

 private:
  char director [100];
  float duration;
  float rating;
};



