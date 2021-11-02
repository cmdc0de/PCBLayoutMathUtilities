
#include <cmath>
#include <iostream>


static const int NUM_ITEMS = 24;
static const float_t RADIUS_OF_CIRCLE = 295.0f/2.0f;
static float StartingX = 0; //center pt of circle
static float StartingY = 0;
int main() {
    float px,py;
    for(int i=0;i<NUM_ITEMS;++i) {
        px = StartingX + RADIUS_OF_CIRCLE * std::cos(2*3.14*i/NUM_ITEMS);
        py = StartingY + RADIUS_OF_CIRCLE * std::sin(2*3.14*i/NUM_ITEMS);
        std::cout << px << "     " << py << std::endl;
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
