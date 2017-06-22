#include <path_planning/obstacles.h>
#include <geometry_msgs/Point.h>
#include <cstdlib>
#include <string>
#include <fstream>
int chatter_need=30;
char chatter_char;
using namespace std;

//chatter_need = chattertemp;


vector< vector<geometry_msgs::Point> > obstacles::getObstacleArray()
{

    ifstream fout("~/home/jiawei/test.txt",ios::in);
//    fout>>chatter_need;
    fout.get(chatter_char);
    fout.close();
//    chatter_need=int(chatter_char);
    printf("%s\n",chatter_char);

    vector<geometry_msgs::Point> obstaclePoint;
    geometry_msgs::Point point;

    //first point
    point.x = chatter_need;
    point.y = chatter_need;
    point.z = 0;

    obstaclePoint.push_back(point);

    //second point
    point.x = chatter_need;
    point.y = chatter_need+20;
    point.z = 0;

    obstaclePoint.push_back(point);

    //third point
    point.x = chatter_need+30;
    point.y = chatter_need+20;
    point.z = 0;

    obstaclePoint.push_back(point);

    //fourth point
    point.x = chatter_need+30;
    point.y = chatter_need;
    point.z = 0;
    obstaclePoint.push_back(point);

    //first point again to complete the box
    point.x = chatter_need;
    point.y = chatter_need;
    point.z = 0;
    obstaclePoint.push_back(point);



    obstacleArray.push_back(obstaclePoint);

    return obstacleArray;

}
