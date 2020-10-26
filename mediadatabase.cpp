#include <iostream>
#include <cstring>
#include "digital_media.h"
#include "video_games.h"
#include "music.h"
#include "movie.h"

using namespace std;

int main() {

  digital_media *dm_db[1000];
  
    
  bool stop = false; //boolean to keep track if the user is still using the application
  int i = 0; //keeps track of how many students are made
  char input[30]; //char to track what the user wants to do
    while (stop == false){ 
	cout << "Please enter ADD, SEARCH, or DELETE. If you would like to close the application enter QUIT" << endl;
	cin >> input;
	if(strcmp(input,"ADD")==0){

	  cout << "Please enter the type of the digital media" << endl;
	  
	  bool running = true;
	  while(running == true){
	    char temptitle[100];
            int tempyear;

	    cin >> input;

	    if (strcmp(input, "Video Game")){
	      running = false;
	      video_games* vg = new video_games();
	      dm_db[i] = vg;

	      char temppublisher[100];
	      float temprating;

	      cout << "What do you want the title of your videogame to be?" << endl;
	      cin >> temptitle;
	      cout << "what year did your videogame come out in?" << endl;
	      cin >> tempyear;
	      cout << "Who is the Publisher?" << endl;
	      cin >> temppublisher;
	      cout << "What is the rating of the videogame" << endl;
	      cin >> temprating;
	      
	      dm_db[i]->setTitle(temptitle);
	      dm_db[i]->setYear(tempyear);
	      dm_db[i]->setpublisher(temppublisher);
	      dm_db[i]->setrating(temprating);
	    }
	    else if(strcmp(input, "Music")){
	      running = false;
	      music* mu = new music();
              dm_db[i] = mu;

	      char temppublisher[100];
	      char tempartist[100];
              int duration;

	      cout << "What do you want the title of your music to be?" << endl;
              cin >> temptitle;
              cout << "what year did your music come out in?" << endl;
              cin >> tempyear;
              cout << "Who is the Publisher?" << endl;
              cin >> temppublisher;
              cout << "Who is the artist of this music" << endl;
              cin >> tempartist;
	      cout << "What is the duration of this music" << endl;
              cin >> duration;

              dm_db[i]->setTitle(temptitle);
              dm_db[i]->setYear(tempyear);
              dm_db[i]->setpublisher(temppublisher);
              dm_db[i]->setartist(tempartist);
	      dm_db[i]->setduration(duration);


	    }
	    else if(strcmp(input, "Movie")){
	      running = false;
	      movie* mv = new movie();
              dm_db[i] = mv;
            
            
              char tempdirector[100];
              float temprating;
	      int duration;

              cout << "What do you want the title of your movie to be?" << endl;
              cin >> temptitle;
              cout << "what year did your movie come out in?" << endl;
              cin >> tempyear;
              cout << "Who is the director?" << endl;
              cin >> tempdirector;
              cout << "What is the rating of the movie" << endl;
              cin >> temprating;
	      cout << "What is the duration of the movie" << endl;
              cin >> duration;

              dm_db[i]->setTitle(temptitle);
              dm_db[i]->setYear(tempyear);
              dm_db[i]->setdirector(tempdirector);
              dm_db[i]->setrating(temprating);
	      dm_db[i]->setduration(duration);

	    }
	    else{
	      running = true;
	      cout << "Please enter a valid Digital Media type" << endl;
	    }
	  }
	  i++;
	}
	else if(strcmp(input,"DELETE")==0){
	  cout << "Please enter student id of student you would like to delete" << endl;
	}
	else if(strcmp(input,"SEARCH")==0){
	}
	else if(strcmp(input,"QUIT")==0){
	  stop = true; //stops while loop
	    for (int x = 0;x<i; x++){ //for loop to free all Students
	      free(dm_db[x]);
	    }
	}
	else{
	    cout << "That was not a valid command" << endl;
	}
    }
}
  
