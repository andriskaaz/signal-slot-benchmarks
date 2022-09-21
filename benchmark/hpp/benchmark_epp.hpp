#pragma once

#include "../lib/wqking/eventpp/include/eventpp/utilities/scopedremover.h"
#include "../lib/wqking/eventpp/include/eventpp/callbacklist.h"

#include "../../benchmark.hpp"

class Epp
{
    eventpp::ScopedRemover<eventpp::CallbackList<void(Rng&)>> reg;

    NOINLINE(void handler(Rng& rng))
    {
        volatile std::size_t a = rng(); (void)a;
    }

    public:
    using Signal = eventpp::CallbackList<void(Rng&)>;

    template <typename Subject, typename Foo>
    static void connect_method(Subject& subject, Foo& foo)
    {
        foo.reg.setCallbackList(subject);
        foo.reg.append(std::bind(&Foo::handler, &foo, std::placeholders::_1));
        // subject.append(std::bind(&Foo::handler, &foo, std::placeholders::_1));
    }
    template <typename Subject>
    static void emit_method(Subject& subject, Rng& rng)
    {
        subject(rng);
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
    static constexpr const char* C_LIB_NAME = "wqking eventpp";
    static constexpr const char* C_LIB_SOURCE_URL = "https://github.com/wqking/eventpp";
    static constexpr const char* C_LIB_FILE = "benchmark_epp";
    static constexpr const char* C_LIB_IS_HEADER_ONLY = "X";
    static constexpr const char* C_LIB_DATA_STRUCTURE = "doubly linked list";
    static constexpr const char* C_LIB_IS_THREAD_SAFE = "-";

    static constexpr const std::size_t C_LIB_SIZEOF_SIGNAL = sizeof(Signal);
};