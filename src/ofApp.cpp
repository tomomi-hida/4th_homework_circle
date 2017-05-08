#include "ofApp.h"

ofPath path;
//--------------------------------------------------------------
void ofApp::setup(){
  path.setCircleResolution(360);
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  
  ofSetBackgroundColor(255, 255, 255);//ËÉåÊôØÁôΩ
  
  
  
  for(int i=1;i<31;i++){//„Ç∞„É¨„Éº„ÅßÁ∏¶„Å´„Ç∞„É™„ÉÉ„Éà„ÇíÂºï„Åè
    ofSetColor(255/2, 255/2, 255/2);
    ofDrawLine(1024/30*i, 0, 1024/30*i,ofGetHeight());
  }
  for(int i=0;i<800/(1024/30);i++){//„Ç∞„É¨„Éº„ÅßÊ®™„Å´„Ç∞„É™„ÉÉ„Éà„Çí„Å≤„Åè
    ofSetColor(255/2, 255/2, 255/2);
    ofDrawLine(0, 1024/30*i,ofGetWidth(),1024/30*i);
}
  
  
  ofPushMatrix();//Â∫ßÊ®ô„ÅÆ‰øùÂ≠ò
  ofTranslate(1024/30*15, 1024/30*11);//‰∏≠ÂøÉ„ÅÆ‰ΩçÁΩÆ„ÇíÂ§âÊõ¥
  
 // ofSetColor(r_color, g_color, b_color);
 
 
  //ÂÜÜ„ÅÆËâ≤„Çí„Å§„Åë„Çã
  //ËßíÂ∫¶ÔºàÔºê„ÄúÔºìÔºñÔºê¬∞Ôºâ„Å®HSBÁ©∫Èñì„ÇíÈñ¢‰øÇ„Å•„Åë„Çã
  //angle„ÅßËµ∑ÁÇπ„Å´„Å™„ÇãÁÇπ„Å®ÂéüÁÇπ„Å®Ê±Ç„ÇÅ„ÇãÁÇπ„ÇíË®òËºâ
 
  ofVec2f v1(x_circle,y_circle);
  ofVec2f v2(ofGetWidth(),0);
  float angle=v1.angle(v2);
  ofSetColor(ofColor::fromHsb(angle, 255, 255));
  //ofNoFill();//Âõ≥ÂΩ¢„ÅÆÂ§ñÂΩ¢Á∑ö„ÅÆËâ≤
  ofFill();//Âõ≥ÂΩ¢„ÅÆ‰∏≠„ÅÆËâ≤
  ofSetCircleResolution(100);//Ëß£ÂÉèÂ∫¶
  

  
  //内円
  int radius_b;
  radius_b=sqrt(pow(x_circle, 2)+pow(y_circle, 2));
  
  if (radius_b<300){
  ofDrawCircle(0, 0, radius_b);//„Éû„Ç¶„Çπ„ÅÆÁßªÂãï„ÅßÂçäÂæÑ„ÅåÊ±∫„Åæ„Çã
  }else{
    ofDrawCircle(0, 0, 300);
  }
  
  //外円
  float radius_a=2*sqrt(pow(x_circle, 2)+pow(y_circle, 2));
    ofNoFill();// „Ç¢„Ç¶„Éà„É©„Ç§„É≥
    ofDrawCircle(0, 0, radius_a);
  
  //‰∏≠ÂøÉ„Åã„ÇâÂ§ñÊé•ÂÜÜ„Å´Á∑ö„ÇíÂºï„Åè
  ofDrawLine(0, 0,2*x_circle,2*y_circle);
  
  //十字の線
  ofSetColor(0, 0, 0);
  ofDrawLine(2*x_circle, -ofGetHeight(), 2*x_circle, ofGetHeight());
  ofDrawLine(-ofGetWidth(),2*y_circle, ofGetWidth(), 2*y_circle);
  
  //adiusとangleを描画する
  
  if (ofGetKeyPressed('s')) {
    ofDrawBitmapString("radius:  "+ofToString(radius_a)+   "angle:  "+ ofToString(angle),2*x_circle, 2*y_circle);
    //グレーのところ
    ofBeginShape();
    ofSetColor(180, 180, 180);
    ofVertex(0,0);
    ofVertex(radius_b, 0);
    //for(int i=1;i<(int)angle;i++){
    ofVertex(x_circle, y_circle);
  //}
    ofEndShape();
    
    
    path.setColor(255);
    path.arc(ofPoint(0,0), radius_b,radius_b,-angle,0);
    path.draw();
    path.clear();
  
   
  }
 
  
  /* if(int z_circle=0;z_circle>0){
    r_color=0;
    g_color=ofRandom(255);
    b_color=0;
  }*/

//ofPopMatrix()//Â∫ßÊ®ô„ÇíÊàª„Åô

}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  x_circle=x;
  y_circle=y;
  z_circle=x_circle/ sqrt(pow(x_circle, 2)+pow(y_circle, 2));
   
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
