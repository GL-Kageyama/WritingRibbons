#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ribbon = new ofxTwistedRibbon();
    ofSetWindowTitle("WritingRibbons");
}

//--------------------------------------------------------------
void ofApp::update(){
    ofVec3f position;
    float speed = 3.0;
    float radius = sin(ofGetElapsedTimef() * speed * 0.8) * 180 + 280;
    position.x = cos(ofGetElapsedTimef() * speed * 1.5) * radius * 1.3;
    position.y = sin(ofGetElapsedTimef() * speed * 1.7) * radius * 0.9;
    position.z = sin(ofGetElapsedTimef() * speed * 1.8) * radius * 1.4;
    ofColor color;
    int hue = int(ofGetElapsedTimef() * 500) % 255;
    color.setHsb(hue, 75, 255);
    ribbon->update(position, color);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(255),
                         ofColor(226, 255, 201),
                         OF_GRADIENT_CIRCULAR);
    
    cam.begin();
    ofRotate(ofGetElapsedTimef() * 10, 2, 2, 4);
    ribbon->draw();
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
