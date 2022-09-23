
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


| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| TheWisp Signals | 33278 | 35878 | 5420 | 10846 | 12728 | 64063 | 5714 | 0 | 98771 |
| palacaze sigslot | 37392 | 24402 | 5742 | 7596 | 9838 | 64305 | 4340 | 0 | 91821 |
| pbhogan Signals | 39012 | 28805 | 7602 | 5728 | 7857 | 66564 | 3162 | 0 | 90913 |
| * Montellese cpp-signal | 31026 | 7683 | 5113 | 5152 | 5262 | 69406 | 2360 | 2581 | 89874 |
| Montellese cpp-signal | 47252 | 26738 | 7654 | 5793 | 7453 | 64992 | 3342 | 0 | 89235 |
| fr00b0 nod | 32639 | 19014 | 8815 | 18799 | 31088 | 20974 | 8388 | 0 | 88065 |
| * fr00b0 nod | 24381 | 8243 | 7200 | 14162 | 20453 | 19346 | 6464 | 6411 | 74037 |
| * palacaze sigslot | 4290 | 2049 | 4818 | 6694 | 8347 | 45980 | 3635 | 3585 | 73058 |
| tripleslash rocket st | 2298 | 2078 | 7211 | 6447 | 7304 | 48766 | 3258 | 0 | 72986 |
| KDBA KDBindings | 47191 | 26484 | 2818 | 4950 | 4919 | 56617 | 3001 | 0 | 72305 |
| * KtnSignalSlot | 16370 | 1872 | 1912 | 4289 | 2325 | 40900 | 1409 | 1416 | 52252 |
| * Kosta signals-cpp | 28888 | 3318 | 2665 | 19092 | 2238 | 22451 | 1818 | 1849 | 50114 |
| * tripleslash rocket | 1355 | 900 | 4239 | 4761 | 4406 | 16806 | 2067 | 2094 | 34373 |
| wqking eventpp | 22726 | 8371 | 3299 | 4134 | 3337 | 19773 | 1651 | 0 | 32195 |

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


