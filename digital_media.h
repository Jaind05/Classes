//using namespace std;

class digital_media {
public:
  char* getTitle();
  int getYear();
  void setTitle(char *);
  void setYear(int );
  char* getpublisher();
  float getrating();
  void setpublisher(char* );
  void setrating(float );
  float getduration();
  char* getartist();
  void setduration(int );
  void setartist(char *);
 char* getdirector();
  void setdirector(char *);

  
private:
  char title [100];
  int year;


};
