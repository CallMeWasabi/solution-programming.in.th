#include <bits/stdc++.h>
using namespace std;

void swap_score(string team_name[], int scores_result[], int i, int j) {
    int temp = scores_result[i];
    string name_temp = team_name[i];
    scores_result[i] = scores_result[j];
    team_name[i] = team_name[j];
    scores_result[j] = temp;
    team_name[j] = name_temp;
}

int main() {
    string team_name[4];
    int scores[4][4], scores_result[4];
    for (int i=0; i<4; i++) {
        cin >> team_name[i];
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> scores[i][j];
        }
    }
    for (int i=0; i<4; i++) {
        int match_score = 0;
        for (int j=0; j<4; j++) {
            if (i!=j) {
                if (scores[i][j]>scores[j][i]) {
                    match_score += 3;
                } else if (scores[i][j]==scores[j][i]) {
                    match_score += 1;
                }
            }
        }
        scores_result[i] = match_score;
    }
    for (int i=0; i<4; i++) {
        for (int j=i+1; j<4; j++) {
            if (scores_result[j] > scores_result[i]) {
                swap_score(team_name, scores_result, i, j);
            } else if(scores_result[j] == scores_result[i]) {
                int r[2][2] = {0};
                for (int k=0; k<2; k++) {
                    int get = 0, loss = 0, target = (!k) ? i: j;
                    for (int u=0; u<4; u++) {
                        get += scores[target][u];
                        loss += scores[u][target];
                    }
                    r[k][0] = get, r[k][1] = loss;
                }
                if (r[0][0] - r[0][1] == r[1][0] - r[1][1]) {
                    if (r[1][0] > r[0][0]) {
                        swap_score(team_name, scores_result, i, j);
                    }
                } else if (r[0][0] - r[0][1] < r[1][0] - r[1][1]) {
                    swap_score(team_name, scores_result, i, j);
                }
            }
        }
    }
    for (int i=0; i<4; i++) {
        cout << team_name[i] << ' ' << scores_result[i] << endl;
    }
    return 0;
}