#ifndef SUDDEN_MAGIC_GROUP_BY_HPP
#define SUDDEN_MAGIC_GROUP_BY_HPP

#include <tuple>    //for std::tie

namespace SM    //Sudden Magic
{

template<typename BegItr, typename EndItr, typename DestItr, typename BinaryFunc>
auto group_by(BegItr b, EndItr e, DestItr d, BinaryFunc ranger) -> void
{
    //b = te advances to the beginning of the next subrange, since the begin and end of the subranges all overlap
    for (auto te(e); b < e; b = te)
    {
        std::tie(b, te) = ranger(b, e);
        *(++d) = {b, te};
    }
}

template<typename BegItr, typename EndItr, typename DestItr, typename BinaryFunc1, typename BinaryFunc2>
auto group_by(BegItr b, EndItr e, DestItr d, BinaryFunc1 ranger, BinaryFunc2 trans) -> void
{
    //b = te advances to the beginning of the next subrange, since the begin and end of the subranges all overlap
    for (auto te(e); b < e; b = te)
    {
        std::tie(b, te) = ranger(b, e);
        *(++d) = trans(b, te);
    }
}

}

#endif