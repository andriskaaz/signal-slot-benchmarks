#pragma once

#include "../lib/KtnFramework/KtnSignalSlot/include/ktnSignalSlot/ktnSignalSlot.hpp"

#include "../../benchmark.hpp"

class Ktnss : public ktn::SignalSlot::ktnSignalReceiver
{
    NOINLINE(void handler(Rng& rng))
    {
        volatile std::size_t a = rng();
        (void)a;
    }

    public:

    using Signal = ktn::SignalSlot::ktnSignal<Rng&>;
    template <typename Subject, typename Foo>
    static void connect_method(Subject& subject, Foo& foo)
    {
        subject.Connect(&foo, &Foo::handler);
    }

    template <typename Subject>
    static void emit_method(Subject& subject, Rng& rng)
    {
        subject.Emit(rng);
    }

    // Used for switching policies at runtime
    static void initialize();

    static void validate_assert(std::size_t);
    static double construction(std::size_t, std::size_t);
    static double destruction(std::size_t, std::size_t);
    static double connection(std::size_t, std::size_t);
    static double disconnect(std::size_t, std::size_t);
    static double reconnect(std::size_t, std::size_t);
    static double emission(std::size_t, std::size_t);
    static double combined(std::size_t, std::size_t);
    static double threaded(std::size_t, std::size_t);

    // The following is used for report outputs
    static constexpr const char* C_LIB_NAME = "* KtnSignalSlot";
    static constexpr const char* C_LIB_SOURCE_URL = "https://gitlab.com/KtnFramework/Libraries/KtnSignalSlot.git";
    static constexpr const char* C_LIB_FILE = "benchmark_ktn";
    static constexpr const char* C_LIB_IS_HEADER_ONLY = "X";
    static constexpr const char* C_LIB_DATA_STRUCTURE = "std::vector";
    static constexpr const char* C_LIB_IS_THREAD_SAFE = "X";

    static constexpr const std::size_t C_LIB_SIZEOF_SIGNAL = sizeof(Signal);
};
