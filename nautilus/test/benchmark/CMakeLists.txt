if (ENABLE_TRACING AND ENABLE_BENCHMARKS)
    add_executable(nautilus-benchmarks
            TracingBenchmark.cpp
            ExecutionBenchmark.cpp
    )
    target_include_directories(nautilus-benchmarks PRIVATE
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../common>
            $<INSTALL_INTERFACE:src/nautilus/>)
    target_include_directories(nautilus-benchmarks PRIVATE
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../src>
            $<INSTALL_INTERFACE:src/nautilus/>)

    target_link_libraries(nautilus-benchmarks PUBLIC nautilus Catch2::Catch2WithMain)
    list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
    catch_discover_tests(nautilus-benchmarks EXTRA_ARGS --allow-running-no-tests)
endif ()
