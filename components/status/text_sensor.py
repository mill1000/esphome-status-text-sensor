import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor
from esphome.const import ENTITY_CATEGORY_DIAGNOSTIC

status_ns = cg.esphome_ns.namespace("status")
StatusTextSensor = status_ns.class_(
    "StatusTextSensor", text_sensor.TextSensor, cg.Component)

CONFIG_SCHEMA = text_sensor.text_sensor_schema(
    StatusTextSensor,
    entity_category=ENTITY_CATEGORY_DIAGNOSTIC,
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config) -> None:
    sens = await text_sensor.new_text_sensor(config)
    await cg.register_component(sens, config)
