
| Library | [constr] | [destr] | conn | disconn | reconn | emit | all | threaded | score |
|---------|----------|---------|------|---------|--------|------|-----|----------|-------|
| Montellese cpp-signal | 47316 | 26701 | 7410 | 5777 | 7723 | 79997 | 3321 | 0 | 104227 |
| TheWisp Signals | 36325 | 35831 | 5239 | 10645 | 12216 | 63389 | 5981 | 0 | 97471 |
| palacaze sigslot | 37142 | 23923 | 5504 | 7258 | 9382 | 63743 | 4185 | 0 | 90071 |
| pbhogan Signals | 39105 | 28686 | 7674 | 5514 | 7568 | 65950 | 3210 | 0 | 89917 |
| fr00b0 nod | 32283 | 18639 | 8947 | 18612 | 31097 | 21117 | 8487 | 0 | 88260 |
| * Montellese cpp-signal | 29817 | 7157 | 4981 | 5042 | 5132 | 62691 | 2465 | 2547 | 82858 |
| * fr00b0 nod | 24243 | 8426 | 7304 | 13886 | 20887 | 19272 | 6284 | 6307 | 73941 |
| KDBA KDBindings | 46312 | 25802 | 2748 | 4932 | 4939 | 54679 | 2683 | 0 | 69982 |
| * palacaze sigslot | 4349 | 1985 | 4422 | 6555 | 8026 | 43403 | 3619 | 3560 | 69585 |
| tripleslash rocket st | 1633 | 1930 | 6799 | 6127 | 6489 | 40838 | 3229 | 0 | 63482 |
| * KtnSignalSlot | 16015 | 1860 | 1934 | 4350 | 2376 | 45065 | 1444 | 1416 | 56586 |
| * Kosta signals-cpp | 29049 | 3380 | 2847 | 19641 | 2175 | 21999 | 1859 | 1783 | 50303 |
| * tripleslash rocket | 1262 | 865 | 4263 | 4699 | 4345 | 16296 | 2010 | 2020 | 33633 |
| wqking eventpp | 22336 | 8613 | 3258 | 4166 | 3336 | 19180 | 1706 | 0 | 31645 |

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

