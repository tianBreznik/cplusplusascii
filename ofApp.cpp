#include "ofApp.h"

int numRows = 20;
int numCols = 20;
//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0, 0, 0); // Change background color here
  ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
  // Leave this at start of draw.
  // See `keyPressed` for where saving variable is changed
  float tileWidth = ofGetWidth()/numCols;
  float tileHeight = ofGetHeight()/numRows;
    
  if (saving) {
    // the file will end up in the ./bin/data directory
    ofBeginSaveScreenAsSVG("mySvg3.svg");
  }
  
    ofBackground(255, 255, 255);
    
    zoff = zoff+0.03;

    for (int i = 0; i < ofGetWidth() / w; i++) {
        
        yoff = yoff + 0.02;
        for (int j = 0; j < ofGetHeight() / w; j++) {
            xoff = xoff + 0.02;
            
            float val = ofNoise(yoff, xoff,zoff);
            int col = ofMap(val, 0, 1, 0, 100);
            string letter = " ";
            if(col < 10){
                ofSetColor(213, 247, 74, ofRandom(255));
                //ofSetColor(213, 247, 74);
                ofFill();
                letter = "<<";
            }
            else if(col < 20){
                ofSetColor(172, 224, 162, ofRandom(255));
                //ofSetColor(172, 224, 162);
                ofFill();
                letter = ">>";
            }
            else if(col < 30){
                ofSetColor(130, 200, 250, ofRandom(255));
                //ofSetColor(130, 200, 250);
                ofFill();
                letter = "+";
            }
            else if(col < 40){
                ofSetColor(252, 250, 184, ofRandom(255));
                //ofSetColor(252, 250, 184);
                ofFill();
                letter = "w";
            }
            else if(col < 50){
                ofSetColor(246, 193, 220, ofRandom(255));
                //ofSetColor(246, 193, 220);
                ofFill();
                letter = "!";
            }
            else if(col < 60){
                ofSetColor(239, 135, 255, ofRandom(255));
                //ofSetColor(239, 135, 255);
                ofFill();
                letter = "0";
            }
            else if(col < 70){
                ofSetColor(255, 94, 132, ofRandom(255));
                //ofSetColor(255, 94, 132);
                ofFill();
                letter = "x";
            }
            else if(col < 80){
                ofSetColor(246, 146, 112, ofRandom(255));
                //ofSetColor(246, 146, 112);
                ofFill();
                letter = "-";
            }
            else if(col < 90){
                ofSetColor(237, 198, 92, ofRandom(255));
                //ofSetColor(237, 198, 92);
                ofFill();
                letter = ";";
            }
            else{
                ofSetColor(255, 180, 0, ofRandom(255));
                //ofSetColor(255, 180, 0);
                ofFill();
                letter = "~";
            }
            
            ofDrawRectangle(i * w, j * w, w, w);
            ofDrawBitmapString(letter, i * w, j * w);
        }
        xoff = 0;
    }
    yoff = 0;
  
  // Leave this at end of draw
  if (saving) {
    ofEndSaveScreenAsSVG();
    cout << "Saved svg" << endl;
    saving = false; // reset the saving variable
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if (key == ' ') {
    saving = true;
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
