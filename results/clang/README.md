
| Library | [constr] | [destr] | all | conn | disconn | emit | reconn | threaded | score |
|---------|----------|---------|-----|------|---------|------|--------|----------|-------|
| TheWisp Signals | 37850 | 37179 | 5963 | 5451 | 11327 | 65115 | 13589 | 0 | 101445 |
| palacaze sigslot | 37655 | 25715 | 4518 | 5891 | 7916 | 66585 | 9488 | 0 | 94398 |
| Montellese cpp-signal | 49395 | 27680 | 3420 | 8254 | 6196 | 69033 | 7337 | 0 | 94240 |
| pbhogan Signals | 40081 | 29830 | 3440 | 7636 | 5773 | 68725 | 7668 | 0 | 93242 |
| * Montellese cpp-signal | 32251 | 7722 | 2624 | 5121 | 5257 | 69117 | 5408 | 2577 | 90104 |
| fr00b0 nod | 33700 | 18644 | 8692 | 9156 | 18247 | 21759 | 30137 | 0 | 87991 |
| tripleslash rocket st | 2437 | 2237 | 3265 | 7531 | 6711 | 51058 | 7350 | 0 | 75915 |
| * fr00b0 nod | 25098 | 8420 | 6672 | 7502 | 14157 | 19914 | 21038 | 6519 | 75801 |
| * palacaze sigslot | 4151 | 2009 | 3629 | 4960 | 6809 | 46503 | 8354 | 3618 | 73872 |
| KDBA KDBindings | 48385 | 27032 | 2992 | 2911 | 5190 | 57686 | 4907 | 0 | 73685 |
| * KtnSignalSlot | 16429 | 1844 | 1490 | 1971 | 4587 | 47019 | 2355 | 1498 | 58919 |
| * Kosta signals-cpp | 30147 | 3528 | 1822 | 2918 | 20986 | 22772 | 2254 | 1718 | 52469 |
| * tripleslash rocket | 1309 | 865 | 2086 | 4132 | 4806 | 17183 | 4518 | 2105 | 34831 |
| wqking eventpp | 23882 | 8697 | 1747 | 3380 | 4309 | 20190 | 3377 | 0 | 33003 |

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


