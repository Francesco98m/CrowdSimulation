#include "boid.cpp"

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+  OBSTACLE CLASS  -+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+-+-+ //

class obstacle
{
    public: 

    obstacle ();
    obstacle ( double xOrigin, double yOrigin, double Radius );

    double getxOrigin ();
    double getyOrigin ();
    double getRadius ();

    private:

    double xOrigin_, yOrigin_, Radius_;
};

void drawObstacles ();

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ //

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+-+-+-  Walls  -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+-+-+ //

vector <obstacle> Walls_;

double nWallGen_ = 200;
double wallRadius_;

void genWalls ();

void wallCollision ( );

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ //