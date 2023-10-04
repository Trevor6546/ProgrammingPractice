unsigned long long numPrimorial (unsigned short int number )
{
  unsigned long long ans = 1;
  std::vector<int> v = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
  for(int i=0; i<number;i++){
    ans *= v[i];
  }
  return ans;
}
