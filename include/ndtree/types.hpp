#pragma once
/// \file types.hpp
#include <ndtree/utility/compact_optional.hpp>

namespace ndtree {
inline namespace v1 {
//

using int_t = int_fast32_t;
using uint_t = uint_fast32_t;
using num_t = double;

/// Index of a node within a tree
using node_idx
 = compact_optional<empty_scalar_value<uint_t, std::numeric_limits<int>::max()>,
                    struct node_idx_tag>;

constexpr node_idx operator"" _n(unsigned long long int i) {
  return node_idx{static_cast<uint_t>(i)};
}

/// Index of a sibling group within a tree
using siblings_idx
 = compact_optional<empty_scalar_value<uint_t, std::numeric_limits<int>::max()>,
                    struct siblings_tag>;

constexpr siblings_idx operator"" _sg(unsigned long long int i) {
  return siblings_idx{static_cast<uint_t>(i)};
}

constexpr uint_t operator"" _l(unsigned long long int i) {
  return static_cast<uint_t>(i);
}

}  // namespace v1
}  // namespace ndtree