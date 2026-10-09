#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Folder {
    string name;
    vector<string> files;
    vector<Folder> subfolders;
};
string iterativeSearch(Folder &folder, string target) {
    for (int i = 0; i < folder.files.size(); i++) {
        if (folder.files[i] == target) {
            return folder.name + "/" + target;
        }
    }
    return "";
}
string recursiveSearch(Folder &folder, string target) {
    // Current folder ke files check
    for (int i = 0; i < folder.files.size(); i++) {
        if (folder.files[i] == target) {
            return folder.name + "/" + target;
        }
    }
    for (int i = 0; i < folder.subfolders.size(); i++) {
        string result = recursiveSearch(folder.subfolders[i], target);

        if (result != "") {
            return folder.name + "/" + result;
        }
    }

    return "";
}

int main() {
    string target;
    Folder root;
    root.name = "Root";
    root.files = {"abc.txt", "photo.jpg"};

    Folder documents;
    documents.name = "Documents";
    documents.files = {"notes.txt", "resume.pdf"};

    Folder projects;
    projects.name = "Projects";
    projects.files = {"code.cpp"};

    Folder cpp;
    cpp.name = "CPP";
    cpp.files = {"program.cpp", "main.cpp"};

    projects.subfolders.push_back(cpp);
    documents.subfolders.push_back(projects);
    root.subfolders.push_back(documents);

    cout << "Enter file name to search: ";
    cin >> target;

    // Iterative search
    string iterativeResult = iterativeSearch(root, target);

    if (iterativeResult != "") {
        cout << "\nIterative Search: File Found" << endl;
        cout << "Path: " << iterativeResult << endl;
    } else {
        cout << "\nIterative Search: File not found in current folder" << endl;
    }
    string recursiveResult = recursiveSearch(root, target);

    if (recursiveResult != "") {
        cout << "\nRecursive Search: File Found" << endl;
        cout << "Path: " << recursiveResult << endl;
    } else {
        cout << "\nRecursive Search: File not found" << endl;
    }

    return 0;
}