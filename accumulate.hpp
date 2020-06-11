# pragma once 

namespace itertools {

    template <typename container>
    class accumulate {
        public:
          accumulate(container c){
              
          }  

        class iterator {
            accumulate* acum;

            public:
                iterator(accumulate* a) : acum(a) {}

                accumulate& operator*() const {return *acum;}

                accumulate& operator->() const {return *acum;}

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