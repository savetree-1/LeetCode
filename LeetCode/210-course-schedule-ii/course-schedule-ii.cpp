class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>inDegree(numCourses,0);
        for(auto pair:prerequisites)
        {
            int course=pair[0];
            int prerequisite=pair[1];
            graph[prerequisite].push_back(course);
            inDegree[course]++;
        }
        queue<int>q;
        for(int course=0;course<numCourses;course++)
        {
            if(inDegree[course]==0)
            {
                q.push(course);
            }
        }
        vector<int>answer;
        while(!q.empty())
        {
            int course=q.front();
            q.pop();
            answer.push_back(course);
            for( int next:graph[course])
            {
                inDegree[next]--;
                if(inDegree[next]==0)
                {
                    q.push(next);
                }
            }
        }
        if(answer.size()!=numCourses)
        {
            return {};
        }
     return answer;
    }
};