class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minHand=minutes*6;
        double hourHand=((hour%12)*60)*0.5 + (minutes*0.5);
        double angle= abs(minHand-hourHand);
        return min(angle, 360 - angle);
        
    }
};