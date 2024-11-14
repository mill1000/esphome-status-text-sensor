#pragma once

#include "esphome/components/text_sensor/text_sensor.h"
#include "esphome/core/component.h"

namespace esphome {
namespace status {

class StatusTextSensor : public text_sensor::TextSensor, public Component {
 public:
  void update() override;
  void dump_config() override;
};

}  // namespace status
}  // namespace esphome