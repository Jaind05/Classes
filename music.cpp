#include <cstring>
#include "digital_media.h"
#include "music.h"
music::music(){ //constructor
  setid(1);
}
music::~music(){ //destructor
  setid(-1);
}
char* music::getpublisher(){ //get publisher
  return publisher;
}
int music::getduration(){ //get duration
  return duration;
}
void music::setduration(int x){ //set duration
  duration = x;
}
void music::setpublisher(char* x){ //set publisher
  strcpy(publisher, x);
}
char* music::getartist(){ //get artist
  return artist;
}
void music::setartist(char* y){ //set artist
  strcpy(artist, y);
}




