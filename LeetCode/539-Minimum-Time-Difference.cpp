/*
By  :-: savetrees
Used:-: Sorting & Linear Scan
*/
class Solution {
public:
int timeToMinutes(const string& timeStr) {
    int hours, minutes;
    char colon;
    stringstream ss(timeStr);
    ss >> hours >> colon >> minutes;
    return hours * 60 + minutes;}
int findMinDifference(vector<string>& times) {
    vector<int> minutes;
    for (const auto& time : times) {
        minutes.push_back(timeToMinutes(time));}
    sort(minutes.begin(), minutes.end());
    int minDiff = 1440;
    for (int i = 1; i < minutes.size(); ++i) {
        minDiff = min(minDiff, minutes[i] - minutes[i - 1]);}
    int circularDiff = 1440 + minutes[0] - minutes.back();
    minDiff = min(minDiff, circularDiff);
    return minDiff;}};