#pragma once // this includes this file only once

#include "ofMain.h"

// This is a C++ definition of a class.
// OpenFrameworks uses this to define your "App"
// It will be used in main.cpp to actually run the application
class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

    //float mouseDistToCenter();
  
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    void drawTile(int row, int col, float tileWidth, float tileHeight);

  
    bool saving = false;
    int w = 8;
    float xoff = 0.0;
    float yoff = 0.0;
    float zoff = 0.0;
};
