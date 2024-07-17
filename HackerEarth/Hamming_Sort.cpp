class CustomComparator { 
public: 
    CustomComparator(int K) : K(K) {} 
  
    bool operator()(int a, int b) const { 
        if(__builtin_popcount(K^a)==__builtin_popcount(K^b))
            return a<b;
        return __builtin_popcount(K^a) < __builtin_popcount(K^b);
    } 
  
private: 
    int K; 
}; 