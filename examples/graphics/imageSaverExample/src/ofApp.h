#pragma once

/*************************************************************************
 *
 * This Example demonstrates how to to save multiple screenshots of your work 
 * using key command "x". The saved screenshot will redraw on your screen and 
 * save to the bin >> data folder.
 * For more information regarding this example take a look at the README.md
 * and "How to save a screenshot using code" How To.
 *
 * Updated 02/20/16 at the ofDocSprint in Denver by Nicole Yi Messier
 *************************************************************************/

#include "ofMain.h"

class ofApp : public ofBaseApp{
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);		
		
		int 				snapCounter; //counter 
		string 				snapString;
		ofImage 			img;
		ofTrueTypeFont		cooper;
		bool 				bSnapshot;		
		float 				phase;
		
		
};

