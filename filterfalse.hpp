# pragma once 

namespace itertools {

    template <typename functor, typename container>
    class filterfalse {
        public:
            filterfalse(functor f, container c) {}

        class iterator {
            filterfalse* ff;

            public:
                iterator(filterfalse* f) : ff(f) {}

                filterfalse& operator*() const {return *ff;}

                filterfalse& operator->() const {return *ff;}

                iterator& operator++() {return *this;}

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