#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
	width = ofGetWidth();
	height = ofGetHeight();
}

//--------------------------------------------------------------
void testApp::update() {
	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::draw() {
	if (GoldenRatio) {
		ShowGoldenRatio(width, height);
		//ShowGoldenRatio(int widthG, int heightG, int decalX, int decalY)
	}
    
	if (CenterRatio) {
		ShowCenter(width, height);
		//ShowCenterRatio(int widthG, int heightG, int decalX, int decalY)
	}
    
	if (ThirdRatio) {
		ShowThirdRatio(width, height);
		//ShowThirdRatio(int widthG, int heightG, int decalX, int decalY)
	}
    
	if (GridDraw) {
		ShowGrid(width, height, 50, 50);
		//ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);
	}
    
	if (GridDrawRelative) {
		ShowGrid(width, height, width / 11, height / 8);
		//ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);
	}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {
	switch (key) {
		case OF_KEY_UP:
			GoldenRatio = !GoldenRatio;
			break;
            
		case OF_KEY_DOWN:
			CenterRatio = !CenterRatio;
			break;
            
		case OF_KEY_RIGHT:
			ThirdRatio = !ThirdRatio;
			break;
            
		case OF_KEY_LEFT:
			GridDraw = !GridDraw;
			break;
            
		case ' ':
			GridDrawRelative = !GridDrawRelative;
			break;
	}
}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo) {
}
