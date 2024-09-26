class MyCalendar {
public:
    MyCalendar() {}
    bool book(int start, int end) {
        for (const auto& event : events) {
            if (max(event.first, start) < min(event.second, end)) {
                return false;}}
        events.push_back({start, end});
        return true; }
private:
    vector<pair<int, int>> events;};