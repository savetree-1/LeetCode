class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> graph(n);
        for (const auto& road: roads) {
            graph[road[0]].push_back({road[1], road[2]});
            graph[road[1]].push_back({road[0], road[2]});
        }
        priority_queue<pair<long, int>, vector<pair<long, int>>, greater<pair<long, int>>> pq;
        vector<long> shortest_times(n, LONG_MAX);
        vector<long> paths(n, 0);
        shortest_times[0] = 0;
        paths[0] = 1;
        pq.push({0, 0});
        while (!pq.empty()) {
            auto [time, intersection] = pq.top();
            pq.pop();
            if (time > shortest_times[intersection]) {
                continue;
            }
            for (const auto& road: graph[intersection]) {
                if (time + road.second < shortest_times[road.first]) {
                    shortest_times[road.first] = time + road.second;
                    paths[road.first] = paths[intersection];
                    pq.push({time + road.second, road.first});
                } else if (time + road.second == shortest_times[road.first]) {
                    paths[road.first] = (paths[road.first] + paths[intersection]) % 1000000007;
                }
            }
        }
        return paths[n - 1];
    }
};