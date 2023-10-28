
    if (st.empty()) return false;
    std::cout << st.top() << std::endl;
    if (st.top() != i) return false;
    st.pop();
  }
  if (!st.empty()) return false;