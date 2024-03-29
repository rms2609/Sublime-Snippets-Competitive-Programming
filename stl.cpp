// sort based on second element, default sorting is based on first element for vectors
bool comp(const vector<int>&a, const vector<int>&b){
  return a[1] < b[1]; // this should return true value for the desired condition. Eg for ascending order a[1] elem should be less than b[1]
}

// use the comp in sort function
vector<vector<int>>vec;
sort(vec.begin(), vec.end(), comp);
