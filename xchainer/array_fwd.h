#pragma once

#include <functional>

namespace xchainer {

class Array;
using ArrayRef = std::reference_wrapper<Array>;
using ConstArrayRef = std::reference_wrapper<const Array>;

}
