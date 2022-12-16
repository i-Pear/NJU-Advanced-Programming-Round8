template<typename A, typename B>
bool is_same_type(A a, B b) {
    return false;
}

template<typename A>
bool is_same_type(A a, A b) {
    return true;
}

