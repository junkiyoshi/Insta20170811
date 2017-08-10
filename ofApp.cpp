#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("Insta");

	ofEnableDepthTest();

	ofNoFill();
	ofSetColor(0);
	ofSetLineWidth(1.5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	float radius = ofGetWidth() / 2;

	for (int degree = 90; degree < 270; degree += 3) {
		float x = radius * cos(degree * DEG_TO_RAD);
		float y = radius * sin(degree * DEG_TO_RAD);
		float diameter = x * 2;
		float noise_value = ofNoise(ofGetFrameNum() * 0.05 + y * 0.01);
		if (noise_value > 0.65) {
			diameter = diameter * (0.7 + noise_value);

			if (degree == 90) {
				ofLine(ofVec2f(0, ofGetHeight()), ofVec2f(0, ofGetHeight() / 2));
			}
		} 

		ofPushMatrix();
		ofTranslate(ofVec2f(0, y));
		ofRotateX(90);


		ofEllipse(ofVec2f(0, 0), diameter, diameter);

		ofPopMatrix();
	}

	this->cam.end();
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
