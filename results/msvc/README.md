
| Library | [constr] | [destr] | all | conn | disconn | emit | reconn | threaded | score |
|---------|----------|---------|-----|------|---------|------|--------|----------|-------|
| TheWisp Signals | 27318 | 32130 | 10553 | 6323 | 22172 | 79955 | 13145 | 0 | 132148 |
| Montellese cpp-signal | 64528 | 23389 | 5465 | 9807 | 11465 | 84267 | 8344 | 0 | 119348 |
| palacaze sigslot | 47358 | 29317 | 6308 | 7128 | 11460 | 75048 | 16256 | 0 | 116200 |
| fr00b0 nod | 37620 | 25761 | 9572 | 9183 | 22294 | 29797 | 36413 | 0 | 107259 |
| KDBA KDBindings | 65753 | 32910 | 6350 | 3946 | 10002 | 71997 | 10851 | 0 | 103145 |
| pbhogan Signals | 3722 | 6371 | 3183 | 8210 | 7780 | 75213 | 8317 | 0 | 102703 |
| tripleslash rocket st | 3421 | 3730 | 5068 | 9864 | 11788 | 60140 | 9776 | 0 | 96635 |
| * Montellese cpp-signal | 19440 | 16013 | 3746 | 6165 | 8802 | 64765 | 6163 | 3604 | 93245 |
| * palacaze sigslot | 5404 | 4068 | 4011 | 5377 | 8140 | 48135 | 11782 | 3947 | 81392 |
| * fr00b0 nod | 22292 | 18597 | 6392 | 7349 | 14494 | 24408 | 19328 | 6141 | 78112 |
| * KtnSignalSlot | 8066 | 3399 | 1812 | 1931 | 6729 | 54667 | 2274 | 1793 | 69206 |
| * Kosta signals-cpp | 19945 | 6705 | 2200 | 2846 | 25039 | 21588 | 2725 | 2159 | 56557 |
| * tripleslash rocket | 1807 | 1530 | 2387 | 4763 | 6238 | 15593 | 4755 | 2375 | 36113 |
| wqking eventpp | 18008 | 14969 | 2094 | 4015 | 5740 | 19547 | 4069 | 0 | 35465 |

| Library | Build Size | Signal Size | Header Only | Data Structure | Thread Safe |
| ------- |:----------:|:-----------:|:-----------:| -------------- |:-----------:|
| [* Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 96 b | X | std::forward_list | X |
| [Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 16 b | X | std::forward_list | - |
| [wqking eventpp](https://github.com/wqking/eventpp) | &mdash; | 120 b | X | doubly linked list | - |
| [TheWisp Signals](https://github.com/TheWisp/signals) | &mdash; | 56 b | X | std::vector | - |
| [KDBA KDBindings](https://github.com/KDAB/KDBindings) | &mdash; | 16 b | X | GenerationalIndexArray | - |
| [* Kosta signals-cpp](https://github.com/Kosta-Github/signals-cpp) | &mdash; | 96 b | X | std::vector | X |
| [* KtnSignalSlot](https://gitlab.com/KtnFramework/Libraries/KtnSignalSlot.git) | &mdash; | 200 b | X | std::vector | X |
| [* fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 144 b | X | std::vector | X |
| [fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 72 b | X | std::vector | - |
| [pbhogan Signals](https://github.com/pbhogan/Signals) | &mdash; | 16 b | X | std::set | - |
| [* palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 104 b | X | std::vector | X |
| [palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 48 b | X | std::vector | - |
| [* tripleslash rocket](https://github.com/tripleslash/rocket) | &mdash; | 24 b | X | intrusive list | X |
| [tripleslash rocket st](https://github.com/tripleslash/rocket) | &mdash; | 24 b | X | intrusive list | - |


