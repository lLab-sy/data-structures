#include <stdexcept>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "map_bst.h"
#include "student.h"
#include <algorithm>
//#pragma once



int main() {
  ///std::vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};
  std::vector<int> v;
  
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  v.push_back(60);
  v.push_back(70);
  v.push_back(80);
  v.push_back(90);
  v.push_back(100);

  // v.push_back(30);
  // v.push_back(70);
  // v.push_back(40);
  // v.push_back(20);
  // v.push_back(10);
  // v.push_back(80);
  // v.push_back(50);
  // v.push_back(60);
  // v.push_back(90);
  // v.push_back(100);
  // std::reverse(v.begin(),v.end());


  // add value from v to m
  CP::map_bst<int,int> m1,m2;
  for (auto x : v) {
    m1[x] = -x;
  }

  int val = 0;
  printf("The \"original\"  tree\n");
  m1.print();
  m2 = m1.split(val);

  //check
  bool ok = true;
  for (auto &x : v) {
    if (x < val && (m1.find(x) == m1.end() || m2.find(x) != m2.end()) ) {
      ok = false;
      break;
    }
    if (x >= val && (m2.find(x) == m2.end() || m1.find(x) != m1.end() ) ) {
      ok = false;
      break;
    }
  }

  printf("Start checking...\n");
  printf("The \"less than\"  tree\n");
  m1.print();
  printf("The \"equal or more than\" tree\n");
  m2.print();
  if (ok) {
    printf("OK\n");
  } else {
    printf("WRONG\n");
  }

	return 0;
}

