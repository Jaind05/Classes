#ifndef DIGITAL_MEDIA
#define DIGITAL_MEDIA


using namespace std;

class digital_media{
public:
  char* getTitle();
  int getYear();
  void setTitle(char *);
  void setYear(int);
  void setid(int);
  int getid();
  //virtual char* getpublisher();
  //virtual float getrating();
  //virtual void setpublisher(char* );
  //virtual void setrating(float );
  //virtual int getduration();
  //virtual char* getartist();
  //virtual void setduration(int );
  //virtual void setartist(char *);
  //virtual char* getdirector();
  //irtual void setdirector(char *);

  
private:
  char title [100];
  int year;
  int id;


};


#endif
