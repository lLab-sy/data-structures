#include <iostream>
#include <iomanip> 
#include <string>
#include <set>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    // for set precision of double with cout
    cout << std::fixed << std::setprecision(2);
    
    int n;
    cin >> n;
    
    // create set for course and teacher
    set<string> courses, teachers;

    // create map for collect score and count
    map<string, pair<int, int> > coursesSC, teachersSC;

    string courseNumber, teacher;
    int score;
    // loop n times
    for(int i=0;i<n;++i){
        cin >> courseNumber >> teacher >> score;

        // add course number and teacher in their set
        courses.insert(courseNumber);
        teachers.insert(teacher);

        // init coursesSc and teachersSC
        if(coursesSC.find(courseNumber) == coursesSC.end()) coursesSC[courseNumber] = make_pair(0, 0);
        if(teachersSC.find(teacher) == teachersSC.end()) teachersSC[teacher] = make_pair(0, 0);

        // count {score, count}
        coursesSC[courseNumber] = make_pair(coursesSC[courseNumber].first + score, coursesSC[courseNumber].second+1);
        teachersSC[teacher] = make_pair(teachersSC[teacher].first + score, teachersSC[teacher].second+1);
    }

    for(auto& course: courses){
        cout << course << " " << 1.0*coursesSC[course].first/coursesSC[course].second << "\n";
    }

    for(auto& name: teachers){
        cout << name << " " << 1.0*teachersSC[name].first/teachersSC[name].second << "\n";
    }
    return 0;
}