//
// Created by paro on 23.10.2020.
//

class MapDim{
public:
    MapDim(int w, int h): width(w), height(h){}
    bool isPositionOutsideMap(int x, int y) const
    {
        return x < 0 or y < 0 or x >= width or y >= height;
    }
private:
    int width;
    int height;
};