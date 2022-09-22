
| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| Montellese cpp-signal | 48809 | 21618 | 9486 | 9326 | 8394 | 87925 | 3912 | 0 | 119043 |
| TheWisp Signals | 21983 | 26977 | 3731 | 16498 | 10971 | 73997 | 6960 | 0 | 112158 |
| palacaze sigslot | 36401 | 27351 | 5810 | 10003 | 8957 | 80907 | 5227 | 0 | 110903 |
| pbhogan Signals | 4441 | 6400 | 8306 | 6399 | 7022 | 78418 | 3313 | 0 | 103459 |
| tripleslash rocket st | 2537 | 3163 | 8019 | 9805 | 7992 | 62946 | 3943 | 0 | 92705 |
| fr00b0 nod | 27922 | 22574 | 7071 | 19731 | 29853 | 26198 | 8167 | 0 | 91020 |
| * Montellese cpp-signal | 16131 | 14470 | 5443 | 7229 | 5586 | 64100 | 3193 | 3277 | 88828 |
| KDBA KDBindings | 47134 | 31969 | 2852 | 6395 | 9231 | 61712 | 5154 | 0 | 85345 |
| * palacaze sigslot | 3992 | 3542 | 4870 | 6913 | 8590 | 48827 | 3910 | 3887 | 76998 |
| * fr00b0 nod | 18370 | 17203 | 5432 | 12480 | 16526 | 22764 | 5361 | 5397 | 67961 |
| * KtnSignalSlot | 7885 | 2909 | 1728 | 4987 | 1860 | 41362 | 1302 | 1468 | 52706 |
| * Kosta signals-cpp | 20645 | 6113 | 2198 | 19690 | 2231 | 18902 | 1757 | 1879 | 46658 |
| * tripleslash rocket | 1363 | 1311 | 4045 | 5441 | 4139 | 14365 | 1994 | 2009 | 31992 |
| wqking eventpp | 16470 | 15067 | 3205 | 4871 | 3456 | 16253 | 1792 | 0 | 29577 |

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

