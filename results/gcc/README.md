
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


| Library | threaded | all | emit | reconn | conn | [constr] | [destr] | disconn | score |
|---------|----------|-----|------|--------|------|----------|---------|---------|-------|
| TheWisp Signals | 0 | 21654 | 106921 | 25050 | 26064 | 45232 | 38035 | 47955 | 227643 |
| Montellese cpp-signal | 0 | 13414 | 106313 | 29223 | 29007 | 75380 | 55789 | 24926 | 202883 |
| pbhogan Signals | 0 | 9325 | 93469 | 25922 | 26300 | 52256 | 64746 | 15482 | 170497 |
| palacaze sigslot | 0 | 8775 | 97252 | 23036 | 17822 | 57619 | 60276 | 13796 | 160681 |
| * Montellese cpp-signal | 7496 | 7437 | 91202 | 14227 | 14000 | 42332 | 54746 | 18128 | 152490 |
| tripleslash rocket st | 0 | 8502 | 88726 | 17141 | 16952 | 6658 | 5931 | 17829 | 149150 |
| KDBA KDBindings | 0 | 8067 | 79757 | 14754 | 9707 | 106049 | 57843 | 15960 | 128245 |
| * palacaze sigslot | 6143 | 6214 | 70748 | 15985 | 13313 | 12373 | 5081 | 11173 | 123576 |
| fr00b0 nod | 0 | 7891 | 20365 | 30940 | 23074 | 38640 | 34862 | 19368 | 101638 |
| * fr00b0 nod | 6159 | 5973 | 18860 | 19468 | 16258 | 32527 | 33660 | 14692 | 81410 |
| * KtnSignalSlot | 2980 | 2975 | 51556 | 5364 | 4911 | 17063 | 4020 | 10137 | 77923 |
| * Kosta signals-cpp | 2866 | 2794 | 24591 | 3570 | 3958 | 46320 | 8444 | 33520 | 71300 |
| * tripleslash rocket | 3299 | 3200 | 19842 | 6582 | 6533 | 2892 | 1793 | 8590 | 48047 |
| wqking eventpp | 0 | 2600 | 23961 | 5131 | 5167 | 36417 | 29611 | 7156 | 44015 |

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



| Library | threaded | all | emit | reconn | conn | [constr] | [destr] | disconn | score |
|---------|----------|-----|------|--------|------|----------|---------|---------|-------|
| TheWisp Signals | 0 | 18532 | 88739 | 24093 | 21432 | 38603 | 37608 | 41619 | 194416 |
| Montellese cpp-signal | 0 | 11814 | 90986 | 26355 | 26550 | 65234 | 52748 | 21704 | 177410 |
| pbhogan Signals | 0 | 8002 | 78088 | 23155 | 23794 | 46216 | 65108 | 13272 | 146311 |
| palacaze sigslot | 0 | 6898 | 79886 | 19961 | 15044 | 48643 | 53655 | 12296 | 134085 |
| * Montellese cpp-signal | 6563 | 6427 | 75329 | 12170 | 12115 | 34915 | 47126 | 15583 | 128188 |
| tripleslash rocket st | 0 | 6981 | 74994 | 14711 | 14785 | 5838 | 4948 | 15805 | 127276 |
| KDBA KDBindings | 0 | 6745 | 65339 | 12314 | 8415 | 87075 | 56227 | 13830 | 106642 |
| * palacaze sigslot | 5266 | 5343 | 58418 | 13323 | 11020 | 10929 | 4499 | 9420 | 102790 |
| fr00b0 nod | 0 | 6897 | 18302 | 27473 | 19953 | 32962 | 33712 | 16606 | 89231 |
| * fr00b0 nod | 5267 | 5166 | 16648 | 16831 | 13857 | 27321 | 33729 | 12727 | 70497 |
| * KtnSignalSlot | 2596 | 2606 | 43926 | 4677 | 4266 | 15502 | 3473 | 8592 | 66663 |
| * Kosta signals-cpp | 2456 | 2332 | 19319 | 3158 | 3485 | 38399 | 7296 | 25620 | 56371 |
| * tripleslash rocket | 2741 | 2678 | 16843 | 5429 | 5442 | 2338 | 1545 | 7362 | 40495 |
| wqking eventpp | 0 | 2241 | 20307 | 4431 | 4452 | 30765 | 29634 | 6166 | 37598 |

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


