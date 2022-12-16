template<int n>
struct fibnacci {
public:
    static constexpr int value = fibnacci<n - 1>::value + fibnacci<n - 2>::value;
};

template<>
struct fibnacci<0> {
    static constexpr int value = 0;
};

template<>
struct fibnacci<1> {
    static constexpr int value = 1;
};