
| Library | [constr] | [destr] | all | conn | disconn | emit | reconn | threaded | score |
|---------|----------|---------|-----|------|---------|------|--------|----------|-------|
| TheWisp Signals | 42328 | 43995 | 20077 | 24824 | 48682 | 96913 | 23228 | 0 | 213723 |
| Montellese cpp-signal | 71764 | 54564 | 12478 | 28324 | 23680 | 103173 | 27040 | 0 | 194696 |
| pbhogan Signals | 51947 | 75132 | 9029 | 26376 | 14878 | 88345 | 24686 | 0 | 163314 |
| palacaze sigslot | 55863 | 63622 | 8502 | 16629 | 13404 | 87620 | 22313 | 0 | 148468 |
| * Montellese cpp-signal | 40526 | 53543 | 7162 | 13195 | 17573 | 89147 | 13531 | 7182 | 147789 |
| tripleslash rocket st | 6395 | 5652 | 8359 | 15608 | 17266 | 85408 | 16182 | 0 | 142822 |
| * palacaze sigslot | 13874 | 5336 | 6084 | 12988 | 10686 | 67173 | 15270 | 5905 | 118105 |
| KDBA KDBindings | 94518 | 63909 | 7304 | 8922 | 14991 | 71973 | 13697 | 0 | 116888 |
| fr00b0 nod | 35707 | 37113 | 7369 | 22183 | 17843 | 19781 | 29586 | 0 | 96762 |
| * fr00b0 nod | 30609 | 37366 | 5723 | 15316 | 14032 | 17852 | 18702 | 5839 | 77465 |
| * KtnSignalSlot | 16929 | 3925 | 2759 | 4893 | 9836 | 49119 | 5140 | 2847 | 74595 |
| * Kosta signals-cpp | 41112 | 8075 | 2636 | 3816 | 27976 | 21585 | 3470 | 2567 | 62049 |
| * tripleslash rocket | 2803 | 1724 | 2780 | 6000 | 8056 | 18922 | 6218 | 2984 | 44960 |
| wqking eventpp | 34510 | 32943 | 2467 | 4821 | 6517 | 22638 | 4942 | 0 | 41385 |

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


