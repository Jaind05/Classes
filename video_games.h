#ifndef VIDEO_GAMES
#define VIDEO_GAMES

#include "digital_media.h"


class video_games : public digital_media{
  //add publisher id = 0
 public:
  video_games();
  ~video_games();
  char* getpublisher();
  float getrating();
  void setpublisher(char* );
  void setrating(float );

 private:
  char publisher[100];
  float rating;
};


#endif //ending video_games
