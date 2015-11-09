#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    width = ofGetWidth();
    height = ofGetHeight();
    myfont.load("OpenSans-Light.ttf", 20);
    
   }

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetHexColor(0xcccccc); // 3rd golden number lines gray
    
    myfont.drawString("PRESS ARROW KEYS / SPACE TO SHOW GRID", 50,50);
    
    ofSetHexColor(0xffffff);

    if(GoldenRatio){
        ShowGoldenRatio(width, height);
        //ShowGoldenRatio(int widthG, int heightG, int decalX, int decalY)
    }
    
    if(CenterRatio){
        ShowCenter(width, height);
        //ShowCenterRatio(int widthG, int heightG, int decalX, int decalY)
    }
    
    if(ThirdRatio){
        ShowThirdRatio(width, height);
        //ShowThirdRatio(int widthG, int heightG, int decalX, int decalY)
    }
    
    if(GridDraw){
        ShowGrid(width, height, 50, 50);
        //ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);
    }
    
    if(GridDrawRelative){
        ShowGrid(width, height, width / 11, height / 8);
        //ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
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
