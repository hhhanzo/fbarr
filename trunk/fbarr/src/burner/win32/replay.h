#include <string>

void UpdateFrameCounter();			//Updates the frame counter display on screen
int GetTotalMovieFrames();			//Returns total length of the movie playing, or 0 if no movie
std::wstring GetCurrentMovie();		//Returns the name of the current movie loaded