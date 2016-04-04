/*
  This example demonstrates how to use the GRT ANBC algorithm in openFrameworks. See the README file for more info.
 */

#pragma once

#include "ofMain.h"
#include "ofxGrt.h"

//State that we want to use the GRT namespace
using namespace GRT;

class ofApp : public ofBaseApp{

public:
    enum ClassifierType{ ADABOOST=0, DECISION_TREE, KKN, GAUSSIAN_MIXTURE_MODEL, NAIVE_BAYES, MINDIST, RANDOM_FOREST, SOFTMAX, SVM_LINEAR, SVM_RBF };

    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    bool setClassifier( const ClassifierType type );
    
    //Create some variables for the demo
    ClassificationData trainingData;      		//This will store our training data
    GestureRecognitionPipeline pipeline;        //This is a wrapper for our classifier and any pre/post processing modules 
    bool record;                                //This is a flag that keeps track of when we should record training data
    UINT trainingClassLabel;                    //This will hold the current label for when we are training the classifier
    string infoText;                            //This string will be used to draw some info messages to the main app window
    Vector< ofColor > classColors;
    ofTexture texture;
    ClassifierType classifierType;

/*
    string classifierTypeToString( ClassifierType classifierType ){
        switch( classifierType ){
            case ADABOOST:
                return "ADABOOST";
            break;
            case DECISION_TREE:
                return "DECISION_TREE";
            break;
            case KKN:
                return "KKN";
            break;
            case GAUSSIAN_MIXTURE_MODEL:
                return "GMM";
            break;
            case NAIVE_BAYES:
                return "NAIVE_BAYES";
            break;
            case MINDIST:
                return "MINDIST";
            break;
            case RANDOM_FOREST:
                return "RANDOM_FOREST";
            break;
            case SOFTMAX:
                return "SOFTMAX";
            break;
            case SVM_LINEAR:
                return "SVM_LINEAR";
            break;
            case SVM_RBF:
                return "SVM_RBF";
            break;
        }
        return "UNKOWN_CLASSIFIER";
    }
*/

};
