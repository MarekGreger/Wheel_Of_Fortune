//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//string parseName(int a) {
//
//    while (a != EOF && isspace(*a)) {
//
//        a = getchar();
//    }
//
//    vector<char> v;
//
//    while (a != EOF && !isspace(a)) {
//
//        v.push_back(a);
//
//        *a = getchar();
//    }
//
//    string s(v.begin(), v.end());
//
//    return s;
//}
//
//int parseScore(int a) {
//
//    while (a != EOF && isspace(*a)) {
//
//        a = getchar();
//    }
//
//    int score = 0;
//
//    while (a != EOF && !isspace(*a)) {
//
//        score *= 10;
//        score += *a - '0';
//
//        *a = getchar();
//    }
//
//    return score;
//}
//
//
//void parseLine(int* a, map<string, int> m) {
//
//    string s = parseName(a);
//    int score = parseScore(a);
//
//    m->insert(make_pair(s, score));
//
//    while (a != EOF && *a != '\n') {
//
//        *a = getchar();
//    }
//}
//
//int main() {
//
//    map<string, int> players;
//
//    int a = getchar();
//
//    while (a != EOF) {
//
//        parseLine(&a, &players);
//
//        a = getchar();
//    }
//
//    for (auto it = players.begin(); it != players.end(); it++) {
//
//        cout << it->first << " " << it->second << endl;
//    }
/*
 typedef vector<string>v1;
    map<string, v1>hasla;
    v1 v2;
    hasla["miasta"] = v2;
    hasla.at("miasta").push_back("Nowy Jork");
    for (auto it = hasla.begin(); it != hasla.end(); it++) {

              cout << it->first<< ":" << endl;
              for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++) {

                  cout << *it1 << " " << endl;

              }

           }*/
//}
