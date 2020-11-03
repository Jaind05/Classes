
// Dhruv Jain
// Classes Assignment
// 11/2/2020
// Creates and allows manipulation of a media data base. 


#include <iostream>
#include <cstring>
#include "digital_media.h"
#include "video_games.h"
#include "music.h"
#include "movie.h"

using namespace std;

int main() { //Main method

  digital_media *dm_db[100] = {NULL}; //Array of pointers to digital_media objects
  
    
  bool stop = false; //boolean to keep track if the user is still using the application
  int i = 0; //keeps track of how many objects are made
  char input[30]; //char to track what the user wants to do
  while (stop == false){ //While game is still running
	cout << "Please enter ADD, SEARCH, or DELETE. If you would like to close the application enter QUIT" << endl;
	cin >> input;
	if(strcmp(input,"ADD")==0){ //If the user wants to add

	  cout << "Please enter the type of the digital media (Videogame, Music, Movie)" << endl;
	  
	  bool running = true;
	  while(running == true){
	    char temptitle[100];
            int tempyear;

	    cin >> input;

	    if (strcmp(input, "Videogame") == 0){ //if they want to create a video game
	      running = false;
	      video_games* vg = new video_games(); //creates new videogame
	      //dm_db[i] = vg; // instead of this make new video game

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
	      
	      vg->setTitle(temptitle); //sets title
	      vg->setYear(tempyear); //sets year
	      vg->setpublisher(temppublisher); //sets publisher
	      vg->setrating(temprating); //sets rating
	      dm_db[i] = vg;
	    }
	    else if(strcmp(input, "Music") == 0){ //if user wants to create music object
	      running = false;
	      music* mu = new music(); //creates new music
              //dm_db[i] = mu; //instead of this make new music

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

              mu->setTitle(temptitle); //sets title
              mu->setYear(tempyear); //sets year
              mu->setpublisher(temppublisher); //sets publisher
              mu->setartist(tempartist); //sets artist
	      mu->setduration(duration); //sets duration
	      dm_db[i] = mu;

	    }
	    else if(strcmp(input, "Movie") ==0){ //if user wants to create a movie object
	      running = false;
	      movie* mv = new movie(); //creates new movie
              //dm_db[i] = mv;//instead of this make new movie
            
            
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

              mv->setTitle(temptitle); //sets title
              mv->setYear(tempyear); //sets year
              mv->setdirector(tempdirector); //sets director
              mv->setrating(temprating); //sets rating
	      mv->setduration(duration); //sets duration
	      dm_db[i] = mv;
	    }
	    else{
	      running = true;
	      cout << "Please enter a valid Digital Media type" << endl;
	    }
	  }
	  i++;
	}
	else if(strcmp(input,"DELETE")==0){ // if the user wants to delete an object
	   cout << "would you like to delete a title or year?" << endl; 
          cin >> input;
          if (strcmp(input,"title")==0){ //if the user wants to delete based on a title
            cout << "What title do you want to delete?" << endl;
	    input[0] = '0';
            cin >> input;
	    for(int i = 0; i < 99; i++){
	      if(dm_db[i] != NULL){
		if(strcmp(input, dm_db[i]->getTitle()) == 0){
		  if(dm_db[i]->getid() == 0){
		    //videogame
                    video_games* vd;
                    vd = (video_games*)dm_db[i];
                    cout << "Are you use you want to delete: "<< vd->getTitle() << ", " << vd->getYear() << ", " << vd ->getpublisher() << ", " << vd -> getrating() << endl;
		    input[0] = '0';

		    cin >> input;
		    if(strcmp(input, "yes")==0){
		      delete vd;
		      dm_db[i] = NULL;
		   }

                 }
                 else if(dm_db[i]->getid() == 1){
                    music* mu;
                    mu = (music*)dm_db[i];
                    cout <<"Are you sure you want to delete: "<< mu->getTitle() << ", " << mu->getYear() << ", " << mu ->getartist() << ", " << mu -> getduration() << ", " << mu -> getpublisher() << endl;
		     input[0] = '0';
		    cin >> input;
		    if (strcmp(input, "yes")==0){
		      delete mu;
		      dm_db[i] = NULL;
		    }
                  }
                  else if(dm_db[i]->getid() == 2){
                    movie* mv;
                    mv = (movie*)dm_db[i];
		    cout <<"Are you sure you want to delete: " <<  mv->getTitle() << ", " << mv->getYear() << ", " << mv ->getdirector() << ", " << mv -> getrating() << ", " << mv -> getduration() << endl;
		    cin >> input;
		    if(strcmp(input, "yes")==0){
		      delete mv;
		      dm_db[i] = NULL;
		    }
		  } //getid
	      }// gettitle
	    }//dm_Db = NULL
	  }// for
	} //if title
	  else if (strcmp(input,"year")==0){ //if the user wants to delete based on year
	    cout << "What year do you want to delete?" << endl;
            cin >> input;
            for(int i = 0; i < 99; i++){
              if(dm_db[i] != NULL){
		int intput;
		cin >> intput;
	  	 if(intput == (dm_db[i]->getYear())){
		   if(dm_db[i]->getid() == 0){
		     //videogame
		     video_games* vd;
		     vd = (video_games*)dm_db[i];
		     cout << "Are you sue you want to delete: "<< vd->getTitle() << ", " << vd->getYear() << ", " << vd ->getpublisher() << ", " << vd -> getrating() << endl;
		     cin >> input;
		     if(strcmp(input, "yes")==0){
		       delete vd;
		       dm_db[i] = NULL;
		     }
		   }
                   else if(dm_db[i]->getid() == 1){
		     music* mu;
		     mu = (music*)dm_db[i];
		     cout <<"Are you sure you want to delete: "<< mu->getTitle() << ", " << mu->getYear() << ", " << mu ->getartist() << ", " << mu -> getduration() << ", " << mu -> getpublisher() << endl;
		     cin >> input;
		     if (strcmp(input, "yes")==0){
		       delete mu;
		       dm_db[i] = NULL;
		     }
		   }
		   else if(dm_db[i]->getid() == 2){
		     movie* mv;
		     mv = (movie*)dm_db[i];
		     cout <<"Are you sure you want to delete: " << mv->getTitle() << ", " << mv->getYear() << ", " << mv ->getdirector() << ", " << mv -> getrating() << ", " << mv -> getduration() << endl;
		     cin >> input;
		     if(strcmp(input, "yes")==0){
		       delete mv;
		       dm_db[i] = NULL;
		     }
		   }
		 } //getyear

              } // dm_db = NULL
            } //for
	}// year

	} //delete
	else if(strcmp(input,"SEARCH")==0){ //if the user wants to search
	  cout << "would you like to search by title or year?" << endl;
	  cin >> input;
	  if (strcmp(input,"title")==0){ //if the user wants to search by title
	    cout << "What title are you looking for?" << endl;
	    cin >> input;
	    for(int i = 0; i < 99; i++){
	      if(dm_db[i] != NULL){
		cout << i << endl;
		if(strcmp(dm_db[i]->getTitle(), input) == 0){
		  if(dm_db[i]->getid() == 0){
		    //videogame
		    video_games* vd;
		    vd = (video_games*)dm_db[i];
		    cout << vd->getTitle() << ", " << vd->getYear() << ", " << vd ->getpublisher() << ", " << vd -> getrating() << endl;
		    
		  }
		  else if(dm_db[i]->getid() == 1){
		    music* mu;
		    mu = (music*)dm_db[i];
		    cout << mu->getTitle() << ", " << mu->getYear() << ", " << mu ->getartist() << ", " << mu -> getduration() << ", " << mu -> getpublisher() << endl;
		     
		  }
		  else if(dm_db[i]->getid() == 2){
		    movie* mv;
		    mv = (movie*)dm_db[i];
		    cout << mv->getTitle() << ", " << mv->getYear() << ", " << mv ->getdirector() << ", " << mv -> getrating() << ", " << mv -> getduration() << endl;
		  }
		}
	      }

	    }
	  }
	  else if (strcmp(input,"year")==0){ //if the user wants to search by year
	    cout << "What year are you looking for?" << endl;
	    int intput;
	    cin >> intput;
            for(int i = 0; i < 99; i++){
              if(dm_db[i] != NULL){
                cout << i << endl;
                if(intput == (dm_db[i]->getYear())){
                  if(dm_db[i]->getid() == 0){
                    //videogame
                    video_games* vd;
                    vd = (video_games*)dm_db[i];
                    cout << vd->getTitle() << ", " << vd->getYear() << ", " << vd ->getpublisher() << ", " << vd -> getrating() << endl;

                  }
                  else if(dm_db[i]->getid() == 1){
                    music* mu;
                    mu = (music*)dm_db[i];
                    cout << mu->getTitle() << ", " << mu->getYear() << ", " << mu ->getartist() << ", " << mu -> getduration() << ", " << mu -> getpublisher() << endl;

                  }
                  else if(dm_db[i]->getid() == 2){
                    movie* mv;
                    mv = (movie*)dm_db[i];
                    cout << mv->getTitle() << ", " << mv->getYear() << ", " << mv ->getdirector() << ", " << mv -> getrating() << ", " << mv -> getduration() << endl;
                  }
                }
              }

            }

	  }
	  
	  
	}
	else if(strcmp(input,"QUIT")==0){ //if the user wants to quit
	  stop = true; //stops while loop
	    for (int x = 0;x<i; x++){ //for loop to delete all objects
	      delete dm_db[x];
	    }
	}
	else{
	    cout << "That was not a valid command" << endl;
	}
    }
}
  
