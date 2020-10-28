#ifndef DIGITAL_MEDIA
#define DIGITAL_MEDIA

//#include "video_games.h"
//#include "music.h"
//#include "movie.h"

using namespace std;

class digital_media{
public:
  char* getTitle();
  int getYear();
  void setTitle(char *);
  void setYear(int );
  virtual char* getpublisher();
  virtual float getrating();
  virtual void setpublisher(char* );
  virtual void setrating(float );
  virtual int getduration();
  virtual char* getartist();
  virtual void setduration(int );
  virtual void setartist(char *);
  virtual char* getdirector();
  virtual void setdirector(char *);

  
private:
  char title [100];
  int year;


};


#endif
