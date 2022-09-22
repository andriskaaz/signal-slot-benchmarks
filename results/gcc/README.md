
| Library | threaded | all | emit | reconn | conn | [constr] | [destr] | disconn | score |
|---------|----------|-----|------|--------|------|----------|---------|---------|-------|
| TheWisp Signals | 0 | 21529 | 105955 | 24123 | 25495 | 44198 | 37953 | 47667 | 224769 |
| Montellese cpp-signal | 0 | 13445 | 104959 | 29939 | 29407 | 75276 | 55470 | 24902 | 202653 |
| pbhogan Signals | 0 | 9272 | 94378 | 25812 | 26496 | 52323 | 64752 | 15463 | 171421 |
| palacaze sigslot | 0 | 8734 | 96464 | 23011 | 17680 | 57801 | 58915 | 13872 | 159760 |
| * Montellese cpp-signal | 7290 | 7483 | 91609 | 14282 | 14100 | 42010 | 54160 | 17959 | 152722 |
| tripleslash rocket st | 0 | 8499 | 91425 | 16903 | 17048 | 6601 | 5828 | 17970 | 151845 |
| KDBA KDBindings | 0 | 8132 | 81495 | 14875 | 10083 | 104313 | 57601 | 15918 | 130503 |
| * palacaze sigslot | 6012 | 6254 | 70216 | 16065 | 13412 | 12429 | 5021 | 11102 | 123060 |
| fr00b0 nod | 0 | 7882 | 20451 | 30665 | 22645 | 38868 | 34862 | 19463 | 101108 |
| * fr00b0 nod | 6296 | 5976 | 18881 | 19712 | 16126 | 32121 | 34000 | 14759 | 81750 |
| * KtnSignalSlot | 2966 | 2999 | 51838 | 5404 | 4920 | 16941 | 3989 | 10165 | 78292 |
| * Kosta signals-cpp | 2881 | 2761 | 24497 | 3542 | 3938 | 45167 | 8418 | 33600 | 71219 |
| * tripleslash rocket | 3308 | 3194 | 19434 | 6566 | 6598 | 2894 | 1803 | 8506 | 47606 |
| wqking eventpp | 0 | 2590 | 23911 | 5116 | 5147 | 36365 | 29521 | 7162 | 43926 |

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

