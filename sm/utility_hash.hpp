#ifndef SUDDEN_MAGIC_UTILITY_HASH_HPP
#define SUDDEN_MAGIC_UTILITY_HASH_HPP

#include <functional>
#include <type_traits>

namespace SM
{
namespace utility
{
#ifdef ENUM_CLASS_HASH_IS_NOT_DEFINED
template <typename EnumT>
class enum_hash
{
using under_type = typename std::underlying_type<EnumT>::type;
public:
    inline std::size_t operator()(EnumT const& in) const
    {
        return std::hash<under_type>()(static_cast<under_type>(in));
    }
};
#else
template<typename Enum>
using enum_hash = std::hash<Enum>;
#endif
}   //end namespace utility
}   //end namespace SM

#endif