#include "movie.h"


movie::movie(){
}
virtual float movie::getrating(){
  return rating;
}
virtual float movie::getduration(){
  return duration;
}
virtual void movie::setduration(float x){
  duration = x;
}
virtual void movie::setrating(Float x){
  rating = x;
}
virtual char* movie::getdirector(){
  return director
}
virtual void movie::setdirector(char* y){
  strcpy(director, y)
}






