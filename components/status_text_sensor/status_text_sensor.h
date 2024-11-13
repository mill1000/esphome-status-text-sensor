#pragma once

#include "esphome/components/text_sensor/text_sensor.h"
#include "esphome/core/component.h"

namespace esphome {
namespace status_text_sensor {

class StatusTextSensor : public text_sensor::TextSensor, public Component {
 public:
  void loop() override;
  void dump_config() override;
};

}  // namespace status_text_sensor
}  // namespace esphome