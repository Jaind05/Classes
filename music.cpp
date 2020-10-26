#include "music.h"


music::music(){
}
virtual char* music::getpublisher(){
  return publisher;
}
virtual float music::getduration(){
  return duration;
}
virtual void music::setduration(float x){
  duration = x;
}
virtual void music::setpublisher(char* x){
  strcpy(publisher, x);
}
virtual char* music::getartist(){
  return artist;
}
virtual void music::setartist(char* y){
  strcpy(artist, y);
}




