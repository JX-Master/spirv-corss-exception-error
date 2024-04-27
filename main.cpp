#include <spirv_cross/spirv_msl.hpp>

int main()
{
    const uint32_t data[] = {0, 0, 0, 0, 0}; // only for test compiling.
    spirv_cross::CompilerMSL msl((const uint32_t*)data, 5);
    auto options = msl.get_msl_options();
    options.argument_buffers = true;
    options.set_msl_version(3, 0, 0);
    options.force_active_argument_buffer_resources = true;
    options.platform = spirv_cross::CompilerMSL::Options::Platform::macOS;
    msl.set_msl_options(options);
    auto compiled_data = msl.compile();
    return 0;
}