#include <cstring>
#include "digital_media.h"
#include "music.h"
//music::music(){
//}
char* music::getpublisher(){
  return publisher;
}
int music::getduration(){
  return duration;
}
void music::setduration(int x){
  duration = x;
}
void music::setpublisher(char* x){
  strcpy(publisher, x);
}
char* music::getartist(){
  return artist;
}
void music::setartist(char* y){
  strcpy(artist, y);
}




