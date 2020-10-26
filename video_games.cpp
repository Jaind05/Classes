#include "video_games.h"


video_games::video_games(){
}
virtual char* video_games::getpublisher(){
  return publisher;
}
virtual float video_games::getrating(){
  return rating;
}
virtual void video_games::setrating(float x){
  rating = x;
}
virtual void video_games::setpublisher(char* x){
  strcpy(publisher, x);
}

