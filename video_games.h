#ifndef VIDEO_GAMES
#define VIDEO_GAMES

//#include "digital_media.h"


class video_games : public digital_media{

 public:
  virtual char* getpublisher();
  virtual float getrating();
  virtual void setpublisher(char* );
  virtual void setrating(float );

 private:
  char publisher[100];
  float rating;
};


#endif //ending video_games
