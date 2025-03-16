#ifndef LOOP_UTILS_H
#define LOOP_UTILS_H

#include <type_traits>

namespace foxc {

    // Choose int or long long based on input size
    template <typename T1, typename T2>
    using AutoInt = typename std::conditional<(sizeof(T1) > sizeof(int) || sizeof(T2) > sizeof(int)), long long, int>::type;

    // Main loop function
    template <typename T1, typename T2, typename Func>
    void loop(T1 start, T2 end, Func func) {
        using T = AutoInt<T1, T2>;
        T s = static_cast<T>(start);
        T e = static_cast<T>(end);

        if (s <= e) { for (T i = s; i <= e; ++i) func(i); }
        else { for (T i = s; i >= e; --i) func(i); }
    }

} // namespace foxc

// Macro to make it look like `fl(1 to n) { ... }`
#define fl(start, end) for (foxc::AutoInt<decltype(start), decltype(end)> i = start, _end = end; (start <= end) ? (i <= _end) : (i >= _end); (start <= end) ? ++i : --i)

#endif // LOOP_UTILS_H
