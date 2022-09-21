#include "../hpp/benchmark_epp.hpp"

NOINLINE(void Epp::initialize())
{
  // NOOP
}

NOINLINE(void Epp::validate_assert(std::size_t N))
{
    return Benchmark<Signal, Epp>::validation_assert(N);
}

NOINLINE(double Epp::construction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::construction(N, limit);
}

NOINLINE(double Epp::destruction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::destruction(N, limit);
}

NOINLINE(double Epp::connection(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::connection(N, limit);
}

NOINLINE(double Epp::disconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::disconnect(N, limit);
}

NOINLINE(double Epp::reconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::reconnect(N, limit);
}

NOINLINE(double Epp::emission(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::emission(N, limit);
}

NOINLINE(double Epp::combined(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Epp>::combined(N, limit);
}

NOINLINE(double Epp::threaded(std::size_t N, std::size_t limit))
{
    // return 0.0;
    return Benchmark<Signal, Epp>::threaded(N, limit);
}
