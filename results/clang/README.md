
| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| TheWisp Signals | 34723 | 35166 | 5255 | 10759 | 12583 | 58606 | 4853 | 0 | 92054 |
| Montellese cpp-signal | 39097 | 28233 | 7110 | 5243 | 7050 | 65982 | 3214 | 0 | 88600 |
| fr00b0 nod | 31472 | 16728 | 8686 | 18642 | 29058 | 20534 | 8519 | 0 | 85439 |
| pbhogan Signals | 36308 | 28803 | 7610 | 5193 | 6297 | 63142 | 3007 | 0 | 85248 |
| palacaze sigslot | 35981 | 23413 | 5684 | 6852 | 8934 | 58484 | 3800 | 0 | 83753 |
| * Montellese cpp-signal | 28415 | 7556 | 4652 | 4285 | 5191 | 63956 | 2131 | 2103 | 82318 |
| tripleslash rocket st | 2091 | 2107 | 6887 | 6415 | 7283 | 48442 | 2824 | 0 | 71851 |
| * fr00b0 nod | 23278 | 7305 | 6526 | 12842 | 19665 | 18892 | 6291 | 5500 | 69715 |
| * palacaze sigslot | 4229 | 1988 | 4877 | 5601 | 7818 | 44122 | 3452 | 3373 | 69243 |
| KDBA KDBindings | 46448 | 26196 | 2767 | 4867 | 4964 | 53462 | 2891 | 0 | 68950 |
| * KtnSignalSlot | 13322 | 1804 | 1919 | 4202 | 2376 | 44297 | 1397 | 1367 | 55558 |
| * Kosta signals-cpp | 28651 | 3426 | 2906 | 19336 | 2123 | 22314 | 1756 | 1791 | 50226 |
| * tripleslash rocket | 1209 | 868 | 4145 | 4652 | 4349 | 16612 | 2065 | 2051 | 33873 |
| wqking eventpp | 20728 | 8376 | 3272 | 4069 | 3361 | 19665 | 1695 | 0 | 32061 |

| Library | Build Size | Signal Size | Header Only | Data Structure | Thread Safe |
| ------- |:----------:|:-----------:|:-----------:| -------------- |:-----------:|
| [* Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 80 b | X | std::forward_list | X |
| [Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 16 b | X | std::forward_list | - |
| [wqking eventpp](https://github.com/wqking/eventpp) | &mdash; | 104 b | X | doubly linked list | - |
| [TheWisp Signals](https://github.com/TheWisp/signals) | &mdash; | 56 b | X | std::vector | - |
| [KDBA KDBindings](https://github.com/KDAB/KDBindings) | &mdash; | 16 b | X | GenerationalIndexArray | - |
| [* Kosta signals-cpp](https://github.com/Kosta-Github/signals-cpp) | &mdash; | 80 b | X | std::vector | X |
| [* KtnSignalSlot](https://gitlab.com/KtnFramework/Libraries/KtnSignalSlot.git) | &mdash; | 168 b | X | std::vector | X |
| [* fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 128 b | X | std::vector | X |
| [fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 72 b | X | std::vector | - |
| [pbhogan Signals](https://github.com/pbhogan/Signals) | &mdash; | 24 b | X | std::set | - |
| [* palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 88 b | X | std::vector | X |
| [palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 48 b | X | std::vector | - |
| [* tripleslash rocket](https://github.com/tripleslash/rocket) | &mdash; | 24 b | X | intrusive list | X |
| [tripleslash rocket st](https://github.com/tripleslash/rocket) | &mdash; | 16 b | X | intrusive list | - |

