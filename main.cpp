
#include <cmath>
#include <iostream>
#include <unistd.h>


//static const int NUM_ITEMS = 24;
//static const float_t RADIUS_OF_CIRCLE = 295.0f/2.0f;
static int NumItems = 0;
static float RadiusOfCircle = 0.0f;
static float StartingX = 0; //center pt of circle
static float StartingY = 0;
int main(int argc, char *argv[]) {
  int c ;
  while( ( c = getopt (argc, argv, "d:r:n:") ) != -1 ) {
    switch(c) {
      case 'n':
        if(optarg) NumItems = std::atoi(optarg);
        break;
      case 'd':
        if(optarg) RadiusOfCircle = std::atof(optarg)/2.0f ;
        break;
      case 'r':
        if(optarg) RadiusOfCircle = std::atof(optarg);
        break;
    }
  }
  if(NumItems==0 || RadiusOfCircle<1.0f) {
    std::cerr << "wrong params, muyst have -n and -d or -r" << std::endl;
    return -1;
  }
    float px,py;
    for(int i=0;i<NumItems;++i) {
        px = StartingX + RadiusOfCircle * std::cos(2*3.14*i/NumItems);
        py = StartingY + RadiusOfCircle * std::sin(2*3.14*i/NumItems);
        std::cout << i << "      "<< px << "     " << py << std::endl;
    }
    /*
    float r = RADIUS_OF_CIRCLE;
    float s = (2*3.14*r)/NUM_ITEMS;
    float angle = s/r;
    float currentAngle = 0;
    float px,py;
    for(int i=0;i<NUM_ITEMS;i++) {
        px = r*cos(currentAngle)+34.315;
        py = r*sin(currentAngle)+66.007;
        std::cout << px << "     " << py << std::endl;
        currentAngle = currentAngle + angle;
    }
     */
}
