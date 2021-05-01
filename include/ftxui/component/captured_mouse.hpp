#ifndef FTXUI_CAPTURED_MOUSE_HPP
#define FTXUI_CAPTURED_MOUSE_HPP

#include <memory>

namespace ftxui {
class CapturedMouseInterface {
 public:
  virtual ~CapturedMouseInterface() {}
};
using CapturedMouse = std::unique_ptr<CapturedMouseInterface>;
}  // namespace ftxui

#endif /* end of include guard: FTXUI_CAPTURED_MOUSE_HPP */
