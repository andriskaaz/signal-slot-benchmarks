
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


| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| TheWisp Signals | 20226 | 25162 | 4249 | 19265 | 11864 | 84958 | 8692 | 0 | 129029 |
| Montellese cpp-signal | 52625 | 19421 | 9748 | 10763 | 9897 | 87170 | 4693 | 0 | 122272 |
| palacaze sigslot | 36463 | 26857 | 6174 | 9513 | 13249 | 79608 | 3120 | 0 | 111664 |
| pbhogan Signals | 4783 | 6726 | 5987 | 6822 | 9085 | 80279 | 3801 | 0 | 105974 |
| tripleslash rocket st | 2385 | 3094 | 8353 | 10108 | 8311 | 65073 | 4338 | 0 | 96183 |
| fr00b0 nod | 31163 | 22519 | 8201 | 20408 | 30318 | 26485 | 8297 | 0 | 93709 |
| * Montellese cpp-signal | 16612 | 15652 | 5473 | 7616 | 5459 | 67586 | 3072 | 2963 | 92170 |
| KDBA KDBindings | 49047 | 33801 | 3201 | 7290 | 8522 | 67107 | 5316 | 0 | 91436 |
| * palacaze sigslot | 3866 | 3304 | 5052 | 6969 | 9011 | 46804 | 3799 | 3510 | 75145 |
| * fr00b0 nod | 18724 | 17010 | 6003 | 12531 | 15557 | 23081 | 5375 | 5319 | 67865 |
| * KtnSignalSlot | 9462 | 3611 | 2042 | 5453 | 2439 | 43730 | 1472 | 1451 | 56588 |
| * Kosta signals-cpp | 18674 | 6865 | 3079 | 24247 | 2395 | 19761 | 1942 | 1879 | 53302 |
| * tripleslash rocket | 1364 | 1251 | 4197 | 5920 | 4397 | 13746 | 1817 | 1925 | 32002 |
| wqking eventpp | 14608 | 13398 | 3485 | 4939 | 3470 | 16887 | 1784 | 0 | 30566 |

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



| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| Montellese cpp-signal | 58302 | 22292 | 9151 | 11551 | 9510 | 102144 | 4445 | 0 | 136802 |
| TheWisp Signals | 27654 | 32496 | 5337 | 20799 | 12668 | 84506 | 8870 | 0 | 132180 |
| palacaze sigslot | 42498 | 30512 | 6873 | 10681 | 11912 | 90352 | 5035 | 0 | 124853 |
| pbhogan Signals | 3490 | 5927 | 6064 | 7364 | 6924 | 89936 | 3681 | 0 | 113970 |
| tripleslash rocket st | 1676 | 3017 | 9181 | 11467 | 7244 | 74320 | 4754 | 0 | 106965 |
| fr00b0 nod | 34373 | 24240 | 8888 | 22895 | 34138 | 28160 | 9482 | 0 | 103564 |
| KDBA KDBindings | 56736 | 39391 | 3628 | 8369 | 9829 | 75255 | 5885 | 0 | 102965 |
| * Montellese cpp-signal | 18657 | 17389 | 5756 | 8798 | 6638 | 74187 | 3500 | 3485 | 102364 |
| * palacaze sigslot | 5296 | 3894 | 5053 | 7915 | 8676 | 53380 | 3775 | 3777 | 82576 |
| * fr00b0 nod | 21584 | 19482 | 7136 | 14265 | 17835 | 26328 | 6100 | 6059 | 77723 |
| * KtnSignalSlot | 10852 | 4062 | 2212 | 6136 | 2651 | 49267 | 1422 | 1690 | 63377 |
| * Kosta signals-cpp | 25074 | 7555 | 3051 | 26605 | 2743 | 21725 | 2221 | 2215 | 58560 |
| * tripleslash rocket | 1584 | 1503 | 4745 | 6229 | 4107 | 15638 | 2094 | 2288 | 35101 |
| wqking eventpp | 18897 | 17978 | 3881 | 5377 | 3874 | 17544 | 1979 | 0 | 32655 |

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


