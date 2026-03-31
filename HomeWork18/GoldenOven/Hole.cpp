#include "Hole.h"

Hole::Hole() : a(0), b(0) {}

Hole::Hole(int x, int y) : a(x), b(y) {}

std::string Hole::fit(const Bar& bar) const {
    if (bar.x() <= a && bar.y() <= b) return ".";

    Bar tmp = bar;
    tmp.rotateX();
    if (tmp.x() <= a && tmp.y() <= b) return "x";

    tmp = bar;
    tmp.rotateY();
    if (tmp.x() <= a && tmp.y() <= b) return "y";

    tmp = bar;
    tmp.rotateZ();
    if (tmp.x() <= a && tmp.y() <= b) return "z";

    tmp = bar;
    tmp.rotateX();
    tmp.rotateY();
    if (tmp.x() <= a && tmp.y() <= b) return "xy";

    tmp = bar;
    tmp.rotateX();
    tmp.rotateZ();
    if (tmp.x() <= a && tmp.y() <= b) return "xz";

    tmp = bar;
    tmp.rotateY();
    tmp.rotateZ();
    if (tmp.x() <= a && tmp.y() <= b) return "yz";

    return "DidNotFit";
}


