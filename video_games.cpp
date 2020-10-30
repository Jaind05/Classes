#include <cstring>
#include "digital_media.h"
#include "video_games.h"


video_games::video_games(){
  setid(0);
}
char* video_games::getpublisher(){
  return publisher;
}
float video_games::getrating(){
  return rating;
}
void video_games::setrating(float x){
  rating = x;
}
void video_games::setpublisher(char* x){
  strcpy(publisher, x);
}

