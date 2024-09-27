/*
By   :-: savetrees
Used :-: Pair
*/
class MyCalendarTwo {
private:
    vector<pair<int, int>> bookings, overlaps;
public:
    MyCalendarTwo() {}
    bool book(int start, int end) {
        for (const auto& interval : overlaps) {
            if (start < interval.second && end > interval.first) {
                return false; }}
        for (const auto& interval : bookings) {
            if (start < interval.second && end > interval.first) {
                overlaps.emplace_back(max(start, interval.first), min(end, interval.second));}}
        bookings.emplace_back(start, end);
        return true;}};
