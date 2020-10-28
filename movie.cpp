#include <cstring>
#include "digital_media.h"
#include "movie.h"


//movie::movie(){
//}
float movie::getrating(){
  return rating;
}
int movie::getduration(){
  return duration;
}
void movie::setduration(int x){
  duration = x;
}
void movie::setrating(float x){
  rating = x;
}
char* movie::getdirector(){
  return director;
}
void movie::setdirector(char* y){
  strcpy(director, y);
}






