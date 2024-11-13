
#include "status_text_sensor.h"

#include "esphome/core/application.h"
#include "esphome/core/log.h"

namespace esphome {
namespace status {

static const char *const TAG = "status_text_sensor";

void StatusTextSensor::loop() {
  if ((App.get_app_state() & STATUS_LED_ERROR) != 0u) {
    this->publish_state("Error");
  } else if ((App.get_app_state() & STATUS_LED_WARNING) != 0u) {
    this->publish_state("Warning");
  } else {
    this->publish_state("OK");
  }
}

void StatusTextSensor::dump_config() {
  LOG_TEXT_SENSOR("", "Status Text Sensor", this);
}

}  // namespace status
}  // namespace esphome