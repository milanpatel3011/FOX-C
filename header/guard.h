#ifndef GUARD_H
#define GUARD_H

#include <functional>

namespace foxc {

    template <typename T>
    bool guard(T condition, std::function<void()> action) {
        if (condition) {
            action();
            return true;
        }
        return false;
    }

} // namespace foxc

#endif // GUARD_H