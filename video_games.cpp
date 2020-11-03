#include <cstring>
#include "digital_media.h"
#include "video_games.h"
#include <iostream>


video_games::video_games(){ //constructor
  setid(0);
}
video_games::~video_games(){ //destructor
  cout << "1" << endl;
  setid(-1);
}
char* video_games::getpublisher(){ //get publisher
  return publisher;
}
float video_games::getrating(){ //get rating
  return rating;
}
void video_games::setrating(float x){ //set rating
  rating = x;
}
void video_games::setpublisher(char* x){//set publisher
  strcpy(publisher, x);
}

