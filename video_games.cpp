#include <cstring>
#include "digital_media.h"
#include "video_games.h"
#include <iostream>


video_games::video_games(){
  setid(0);
}
video_games::~video_games(){
  cout << "1" << endl;
  setid(-1);
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

