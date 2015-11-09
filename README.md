# ofxShowGrid

![ofxShowGrid](http://www.fluate.net/media/blog/ofxaddons_thumbnail.png)

Openframeworks addon C++

Draw visually a grid, the golden ratio, the third ratio and center relative to your width and height.

Webpage : <http://www.fluate.net/code/ofxshowgrid>

Credit : Nicolas Boillot <http://www.fluate.net>

  
    
    
## USAGE:
  
    
    
===
in __ofApp.h__ add :

	#include "ofxShowGrid.h" 


===

Then in __draw()__ of __ofApp.cpp__ add :

To show __Grid__ relative to your width and height, define sizeW and sizeH to define each cell size.

	ShowGrid(int widthG, int heightG,  int sizeW, int sizeH, int decalX, int decalY);

To show __Golden ratio__ relative to your width and height.

	ShowGoldenRatio(int widthG, int heightG, int decalX, int decalY);

To show __Center__ relative to your width and height.
    
	ShowCenter(int widthG, int heightG, int decalX, int decalY);

To show __Third Ratio__ relative to your width and height.
  
	ShowThirdRatio(int widthG, int heightG, int decalX, int decalY);
	

 __int decalX, int decalY__ are optionals, see the example for complete usage.	


	
	



