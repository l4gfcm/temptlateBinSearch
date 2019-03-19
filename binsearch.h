#ifndef BINSEARCH_H
#define BINSEARCH_H
#include <iterator>

template<class forvardIt, class T>
forvardIt binSearch(const forvardIt & first, const forvardIt &last, const T elem){
    typename std::iterator_traits<forvardIt>::difference_type size = distance(first, last);
    auto midN = size / 2;
    auto mid = first;
    std::advance(mid , midN);
    if(elem == *mid){
        return mid;
    }
    else if (elem < *mid) {
        binSearch(first, mid, elem);
    }
    else {
        binSearch(std::next(mid), last, elem);
    }

}
#endif // BINSEARCH_H
