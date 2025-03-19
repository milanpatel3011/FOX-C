#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <queue>
#include <functional>

namespace foxc {

    template <typename T, typename Compare = std::less<T>>
    class PriorityQueue {
    private:
        std::priority_queue<T, std::vector<T>, Compare> pq;
    public:
        void push(T value) { pq.push(value); }
        void pop() { pq.pop(); }
        T top() { return pq.top(); }
        bool empty() { return pq.empty(); }
    };

} // namespace foxc

#endif // PRIORITY_QUEUE_H