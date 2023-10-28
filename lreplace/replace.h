void replace(const T& x, list<T>& y) {
  //write your code here
  for(auto it=begin();it!=end();++it){
    if(*it == x){
      for(auto nv=y.begin();nv!=y.end();++nv) insert(it, *nv);
      auto re = it;
      it++;
      erase(re);
      it--;
    }
  }
}
