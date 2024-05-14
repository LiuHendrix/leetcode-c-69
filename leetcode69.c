int mySqrt(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    double left=0;
    double right=x;
    double temp;
    while ((int)right-(int)left != 0) {
        temp = (left+right)/2;
        if (temp*temp>x) {
            right = temp;
        }else if (temp*temp<x) {
            left = temp;
        }else {
            return temp;
        }
    }
    return (int)temp;
}