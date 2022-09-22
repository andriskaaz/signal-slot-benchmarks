
| Library | threaded | all | emit | reconn | conn | [constr] | [destr] | disconn | score |
|---------|----------|-----|------|--------|------|----------|---------|---------|-------|
| TheWisp Signals | 0 | 18274 | 89713 | 23321 | 21803 | 38883 | 32233 | 40385 | 193496 |
| Montellese cpp-signal | 0 | 11487 | 90105 | 25651 | 25081 | 62683 | 47159 | 20977 | 173301 |
| pbhogan Signals | 0 | 7894 | 80102 | 21916 | 22405 | 44187 | 54587 | 13119 | 145436 |
| palacaze sigslot | 0 | 7357 | 81785 | 19285 | 15064 | 49555 | 50556 | 11779 | 135270 |
| * Montellese cpp-signal | 6235 | 6304 | 76935 | 12298 | 12142 | 36211 | 46345 | 15271 | 129185 |
| tripleslash rocket st | 0 | 7220 | 77219 | 14360 | 14392 | 5560 | 4977 | 14950 | 128141 |
| KDBA KDBindings | 0 | 6862 | 67969 | 12765 | 8536 | 88188 | 48829 | 13597 | 109728 |
| * palacaze sigslot | 5215 | 5203 | 57000 | 13555 | 11433 | 10636 | 4492 | 9555 | 101962 |
| fr00b0 nod | 0 | 6685 | 17097 | 25964 | 19017 | 33047 | 29413 | 16352 | 85115 |
| * fr00b0 nod | 5265 | 5043 | 15429 | 16629 | 13684 | 27039 | 28635 | 12468 | 68517 |
| * KtnSignalSlot | 2528 | 2583 | 42651 | 4534 | 4139 | 14218 | 3378 | 8522 | 64957 |
| * Kosta signals-cpp | 2375 | 2353 | 20568 | 3021 | 3271 | 38469 | 7287 | 28408 | 59997 |
| * tripleslash rocket | 2776 | 2716 | 17014 | 5561 | 5616 | 2455 | 1542 | 7186 | 40868 |
| wqking eventpp | 0 | 2182 | 20235 | 4290 | 4349 | 30756 | 25258 | 5892 | 36949 |

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

