//#include "digital_media.h"

class video_games : public digital_media
{
 public:
  char** getpublisher();
  float getRating();
  void setpublisher(char* );
  void setrating(float );

 private:
  char publisher[100];
  float rating;
};


