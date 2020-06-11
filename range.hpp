# pragma once 

namespace itertools {
    
    class range {
        int first, last, current;
        public:
            range() {}
            range(int x, int y) : first(x), last(y), current(x) {}


        class iterator {
            range* rng;

            public:
                iterator(range* r) : rng(r) {}

                range& operator*() const {return *rng;}

                range& operator->() const {return *rng;}

                iterator& operator++() {return *this;}

                // postfix
                const iterator operator++(int) {return *this;}

                bool operator==(const iterator& it) const {return false;}

                bool operator!=(const iterator& it) const {return false;}
        };

        iterator begin() {
            return iterator{this};
        }

        iterator end() {
            return iterator{nullptr};
        }
    };
}