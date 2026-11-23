#pragma once

#include <helpers/ESP32Board.h>

class LilygoT3S3LR1121Board : public ESP32Board {
public:
  uint32_t getIRQGpio() override {
    return P_LORA_DIO_9; // default for LR1121
  }
  const char* getManufacturerName() const override {
    return "LilyGo T3-S3 LR1121";
  }
};