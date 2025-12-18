#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Task {
    string name;
    int start;
    int end;
};

// Comparator to sort tasks by start time
bool compare(Task a, Task b) {
    return a.start < b.start;
}

int main() {
    int n;
    cout << "Enter number of tasks: ";
    cin >> n;

    vector<Task> tasks(n);

    cout << "\nEnter task details (Name Start End):\n";
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].name >> tasks[i].start >> tasks[i].end;
    }

    // Sort tasks by start time
    sort(tasks.begin(), tasks.end(), compare);

    bool conflictFound = false;

    cout << "\nChecking for deadline conflicts...\n\n";

    for (int i = 1; i < n; i++) {
        if (tasks[i].start < tasks[i - 1].end) {
            conflictFound = true;
            cout << "Conflict detected between:\n";
            cout << " - " << tasks[i - 1].name
                 << " (" << tasks[i - 1].start << " - " << tasks[i - 1].end << ")\n";
            cout << " - " << tasks[i].name
                 << " (" << tasks[i].start << " - " << tasks[i].end << ")\n\n";
        }
    }

    if (!conflictFound) {
        cout << "No deadline conflicts found.\n";
    }

    return 0;
}
