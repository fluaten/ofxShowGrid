# ofxShowGrid

Draw 2D visual helper. A grid, the golden ratio, the third ratio and center relative to your width and height.


## USAGE:

===
Add :

	#include "ofxShowGrid.h" 

in testApp.h


===

Then in draw() of testApp.cpp add :

Show Grid relative to your width and height, define sizeW and sizeH to define each cell size.

	ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);

Show Golden ratio relative to your width and height.

	ShowGoldenRatio(int widthG, int heightG, int decalX, int decalY);

Show Center relative to your width and height.
    
	ShowCenterRatio(int widthG, int heightG, int decalX, int decalY);

Show Third Ratio relative to your width and height.
  
	ShowThirdRatio(int widthG, int heightG, int decalX, int decalY);
	

See example for complete usage.		
	



