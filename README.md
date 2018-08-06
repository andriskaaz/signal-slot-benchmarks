
# signal-slot-benchmarks

Comprehensive benchmarks for a majority of GitHub c++ signal slot implementations and others.

Tested Libraries
----------------

TODO

Tested Environments
-------------------
_(click to view results)_
<br/>
[GCC 6.3](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/results_gcc/README.md)
<br/>
[MSVC 14](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/results_msvc/README.md)

Benchmark Algorithms
--------------------

_The individual benchmark algorithms are completely generic through templates._

| Algorithm | Description |
| --------- | ----------- |
| [validation_assert](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L21) | Make sure each signal implementation is functioning correctly. |
| [construction](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L50) | Time the construction of a Signal to an N number of Foo instances. |
| [destruction](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L71) | Time the destruction of a Signal and associated Connections to N number of Foo instances. |
| [connection](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L101) | Time Signal connections to a randomized N number of Foo instances. |
| [emission](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L129) | Time the duration of an N slot emission. |
| [combined](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L159) | Time construction, destruction, connection, and emission together. |
| [threaded](https://github.com/NoAvailableAlias/signal-slot-benchmarks/blob/master/benchmark.hpp#L186) | Time the runtime of parallel slot creation, connection, emission, and destruction. |
<br/>
