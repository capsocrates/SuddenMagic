#ifndef SUDDEN_MAGIC_UTILITY_MAKE_UNIQUE_HPP
#define SUDDEN_MAGIC_UTILITY_MAKE_UNIQUE_HPP

#include <memory>

namespace SM
{
namespace utility
{
#ifdef MAKE_UNIQUE_IS_NOT_DEFINED
template<typename T, typename... Ts>
std::unique_ptr<T> make_unique(Ts&&... params)
{
    return std::unique_ptr<T>(new T(std::forward<Ts>(params)...));
}
#else
using std::make_unique;
#endif
}   //end namespace utility
}   //end namespace SM

#endif