#include <cstring>
#include "digital_media.h"
#include "movie.h"


movie::movie(){ //Constructor
  setid(2);

}
movie::~movie(){ //Destructor
  setid(-1);
}
float movie::getrating(){ //Get rating
  return rating;
}
int movie::getduration(){ //Get duration
  return duration;
}
void movie::setduration(int x){ //Set duration
  duration = x;
}
void movie::setrating(float x){ //Set rating
  rating = x;
}
char* movie::getdirector(){ //get director
  return director;
}
void movie::setdirector(char* y){ //set director
  strcpy(director, y);
}






