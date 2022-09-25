
# signal-slot-benchmarks

Comprehensive benchmarks for a majority of GitHub c++ signal slot implementations and others.
<br/>
**_Boost, as well as C++17 support, is required to build this project._**

Foreword
--------

These benchmarks do not accurately depict real world usage patterns seen in the wild.
<br/>
However, these benchmarks were designed to provide impartial results regardless of implementation.
<br/>

Tested Environments
-------------------
- [MSVC(Windows)](/results/msvc/README.md)
- [GCC(Ubuntu)](/results/gcc/README.md)
- [Clang(macOS)](/results/clang/README.md)

Maintainers
-----------

Generally, implementations that get added to this benchmark project aren't regularly updated by me unless asked to do so.
If you are a maintainer of a referenced library, I encourage you to fork this project and create pull requests to expedite updates.

Benchmark Algorithms
--------------------

_The individual benchmark algorithms are completely generic through the use of templates._

| Algorithm | Description |
| --------- | ----------- |
| [validation_assert](benchmark.hpp#L19) | Make sure each signal implementation is functioning correctly. |
| [construction](benchmark.hpp#L48) | Sample the default construction of N * N number of Signal instances. |
| [destruction](benchmark.hpp#L66) | Sample the destruction of N * N number of Signal instances. |
| [connection](benchmark.hpp#L85) | Sample Signal connections to N number of Foo instances. |
| [disconnect](benchmark.hpp#L108) | Sample disconnecting N number of Foo instances from a single Signal. |
| [reconnect](benchmark.hpp#L135) | Sample reconnecting N number of Foo instances to a global Signal. |
| [emit](benchmark.hpp#L159) | Sample the duration of an N slot emission. |
| [all](benchmark.hpp#L184) | Sample all previous benchmarks together in one combined benchmark. |
| [threaded](benchmark.hpp#L208) | Same as the previous benchmark but is now threaded. |
<br/>
