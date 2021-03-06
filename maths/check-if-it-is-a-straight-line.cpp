#include "maths.h"



/*
 * You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point.
 * Check if these points make a straight line in the XY plane.
 *
 * Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

 Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false


Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
 */

bool checkStraightLine(vector<vector<int>>& coordinates) {
    if(coordinates.size() <= 2) {
        return true;
    }

    int dx = coordinates[0][0] - coordinates[1][0];
    int dy = coordinates[0][1] - coordinates[1][1];

    for(int i = 2; i < coordinates.size(); ++i) {
        if((coordinates[i][0] - coordinates[i - 1][0])*dy !=
           (coordinates[i][1] - coordinates[i - 1][1])*dx) {
            return false;
        }

    }

    return true;
}