#include "stdafx.h"

namespace
{
    std::ofstream g_log_stream_("d3d_proxy_log.txt");

}

void log_method(char const *interface_name, char const *method_name)
{
    static std::ofstream s("call_log.txt");
    s << interface_name << "." << method_name << "\n";
}

void log_message(string const &str)
{
    g_log_stream_ << str << std::endl;
}