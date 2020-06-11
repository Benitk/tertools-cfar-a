# pragma once 

namespace itertools {

    template <typename container, typename bool_container>
    class compress {
        public:
            compress(container c, bool_container bc) {

            }

        class iterator {
            compress* comp;

            public:
                iterator(compress* c) : comp(c) {}

                
                compress& operator*() const {return *comp;}

                compress& operator->() const {return *comp;}

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