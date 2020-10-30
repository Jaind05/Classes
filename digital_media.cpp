#include <cstring>
#include "digital_media.h"


using namespace std;

//digital_media::digital_media(){
//}

char* digital_media::getTitle(){
  return title;
}

int digital_media::getYear(){
  return year;
}

void digital_media::setTitle(char* x){
  strcpy(title, x);
}

void digital_media::setYear(int y){
  year = y;
}
void digital_media::setid(int y){
  id = y;
}
int digital_media::getid(){
  return id;
}

/*
virtual char* digital_media::getpublisher(){

}
virtual float digital_media::getrating(){

}
virtual void digital_media::setrating(float x){

}
virtual void digital_media::setpublisher(char* x){

}
virtual char* digital_media::getdirector(){

}
virtual int digital_media::getduration(){

}
virtual void digital_media::setdirector(char *x){

}
virtual void digital_media::setduration(int){

}
virtual char* digital_media::getartist(){

}
virtual void digital_media::setartist(char *x){

}

*/





