#ifndef RANGE_H
#define RANGE_H

namespace foxc {
    class Range {
    public:
        int start, stop, step;  // Changed 'end' to 'stop' to avoid conflict

        Range(int s, int e, int st = 1) : start(s), stop(e), step(st) {}

        class Iterator {
            int value, step;
        public:
            Iterator(int v, int s) : value(v), step(s) {}
            bool operator!=(const Iterator& other) const { return value != other.value; }
            int operator*() const { return value; }
            Iterator& operator++() { value += step; return *this; }
        };

        Iterator begin() const { return Iterator(start, step); }
        Iterator end() const { return Iterator(stop, step); } // No conflict now
    };
} // namespace foxc

#endif // RANGE_H