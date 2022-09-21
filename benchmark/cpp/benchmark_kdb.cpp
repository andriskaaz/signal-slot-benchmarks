#include "../hpp/benchmark_kdb.hpp"

NOINLINE(void Kdb::initialize())
{
    // NOOP
}
NOINLINE(void Kdb::validate_assert(std::size_t N))
{
    return Benchmark<Signal, Kdb>::validation_assert(N);
}    
NOINLINE(double Kdb::construction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::construction(N, limit);
}
NOINLINE(double Kdb::destruction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::destruction(N, limit);
}
NOINLINE(double Kdb::connection(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::connection(N, limit);
}
NOINLINE(double Kdb::disconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::disconnect(N, limit);
}
NOINLINE(double Kdb::reconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::reconnect(N, limit);
}
NOINLINE(double Kdb::emission(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::emission(N, limit);
}
NOINLINE(double Kdb::combined(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Kdb>::combined(N, limit);
}
NOINLINE(double Kdb::threaded(std::size_t N, std::size_t limit))
{
    return 0.0;
    return Benchmark<Signal, Kdb>::threaded(N, limit);
}
