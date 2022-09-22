
| Library | threaded | all | emit | reconn | conn | [constr] | [destr] | disconn | score |
|---------|----------|-----|------|--------|------|----------|---------|---------|-------|
| TheWisp Signals | 0 | 18022 | 88602 | 22805 | 21631 | 38148 | 31677 | 39729 | 190790 |
| Montellese cpp-signal | 0 | 11146 | 87207 | 24983 | 24402 | 61754 | 46746 | 20826 | 168563 |
| pbhogan Signals | 0 | 7720 | 78150 | 21400 | 21759 | 42911 | 53437 | 12707 | 141735 |
| palacaze sigslot | 0 | 7343 | 79961 | 19157 | 14806 | 47764 | 49897 | 11535 | 132803 |
| * Montellese cpp-signal | 6237 | 6233 | 76258 | 11914 | 11745 | 35637 | 45067 | 14860 | 127247 |
| tripleslash rocket st | 0 | 7030 | 76017 | 13920 | 13912 | 5523 | 4932 | 14896 | 125775 |
| KDBA KDBindings | 0 | 6747 | 67825 | 12418 | 8380 | 85900 | 47985 | 13159 | 108529 |
| * palacaze sigslot | 5088 | 5207 | 58622 | 13404 | 11161 | 10508 | 4227 | 9245 | 102727 |
| fr00b0 nod | 0 | 6430 | 16546 | 25373 | 18800 | 32239 | 28796 | 16086 | 83235 |
| * fr00b0 nod | 5138 | 5008 | 16103 | 16377 | 13457 | 26883 | 28129 | 12288 | 68370 |
| * KtnSignalSlot | 2508 | 2519 | 43466 | 4528 | 4137 | 14141 | 3345 | 8442 | 65600 |
| * Kosta signals-cpp | 2399 | 2333 | 20455 | 2984 | 3306 | 38674 | 7042 | 27968 | 59444 |
| * tripleslash rocket | 2744 | 2677 | 16686 | 5483 | 5485 | 2405 | 1497 | 7082 | 40157 |
| wqking eventpp | 0 | 2174 | 19919 | 4304 | 4357 | 30288 | 24568 | 5975 | 36728 |

| Library | Build Size | Signal Size | Header Only | Data Structure | Thread Safe |
| ------- |:----------:|:-----------:|:-----------:| -------------- |:-----------:|
| [* Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 56 b | X | std::forward_list | X |
| [Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 16 b | X | std::forward_list | - |
| [wqking eventpp](https://github.com/wqking/eventpp) | &mdash; | 80 b | X | doubly linked list | - |
| [TheWisp Signals](https://github.com/TheWisp/signals) | &mdash; | 56 b | X | std::vector | - |
| [KDBA KDBindings](https://github.com/KDAB/KDBindings) | &mdash; | 16 b | X | GenerationalIndexArray | - |
| [* Kosta signals-cpp](https://github.com/Kosta-Github/signals-cpp) | &mdash; | 56 b | X | std::vector | X |
| [* KtnSignalSlot](https://gitlab.com/KtnFramework/Libraries/KtnSignalSlot.git) | &mdash; | 120 b | X | std::vector | X |
| [* fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 104 b | X | std::vector | X |
| [fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 72 b | X | std::vector | - |
| [pbhogan Signals](https://github.com/pbhogan/Signals) | &mdash; | 48 b | X | std::set | - |
| [* palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 64 b | X | std::vector | X |
| [palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 48 b | X | std::vector | - |
| [* tripleslash rocket](https://github.com/tripleslash/rocket) | &mdash; | 24 b | X | intrusive list | X |
| [tripleslash rocket st](https://github.com/tripleslash/rocket) | &mdash; | 16 b | X | intrusive list | - |

