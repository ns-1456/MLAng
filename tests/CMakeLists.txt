add_executable(mlang_smoke_test smoke_test.cpp)

target_link_libraries(mlang_smoke_test PRIVATE mlang_core)

add_test(NAME mlang_smoke_test COMMAND mlang_smoke_test)
