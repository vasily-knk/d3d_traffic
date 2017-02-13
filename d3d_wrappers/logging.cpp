#include "stdafx.h"

namespace
{
    std::ofstream g_log_stream_("d:\\d3d_proxy_log.txt");

}

void log_method_always(char const *interface_name, char const *method_name)
{
    g_log_stream_ << "Method: " << interface_name << "." << method_name << std::endl;
}   

void log_method(char const *interface_name, char const *method_name)
{
    //log_method_always(interface_name, method_name);   

    //static std::ofstream s("d:\\call_log.txt");
    //s << interface_name << "." << method_name << std::endl;
}            

void log_message(string const &str)
{
    g_log_stream_ << str << std::endl;
}