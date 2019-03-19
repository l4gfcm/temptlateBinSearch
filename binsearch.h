#ifndef BINSEARCH_H
#define BINSEARCH_H
#include <iterator>

template<class forwardIt, class T>
forwardIt binSearch(const forwardIt & first, const forwardIt &last, const T elem){
    typename std::iterator_traits<forwardIt>::difference_type size = std::distance(first, last);
    auto mid = first;
    std::advance(mid , size / 2);
    if(elem == *mid){
        return mid;
    }
    if (elem < *mid) {
        binSearch(first, mid, elem);
    }
    else {
        binSearch(std::next(mid), last, elem);
    }

}
#endif // BINSEARCH_H
