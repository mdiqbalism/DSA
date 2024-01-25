when you don't have size of vector<vector<int>> then use this

vector<vector<int>> arr;
arr.push_back({1, 2, 3});
arr.push_back({4, 5, 6});

for (int i = 0; i < arr.size(); ++i) {
  for (int j = 0; j < arr[i].size(); ++j) {
    cout << arr[i][j] << " ";
  }
  cout << endl;
}
