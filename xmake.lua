add_requires("spirv-cross")

target("TestSPIRVCorss")
    set_kind("binary")
    add_files("main.cpp")
    add_packages("spirv-cross")
target_end()