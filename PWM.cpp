#include "PWM.hpp"

/// Increases the duty cycle by its smallest increment (0.625%)
void increaseDutyCycle(int* OCR1A_reg) {
  (*OCR1A_reg)++;
}

/// Decreases the duty cycle by its smallest increment (0.625%)
void dereaseDutyCycle(int* OCR1A_reg) {
  (*OCR1A_reg)--;
}

/// ATTEMPS to set the duty cycle to a specific value.
/// Rounds down to the closest value.
void setDutyCycle(int* OCR1A_reg, DutyCycle_t dutyCycle) {
  (*OCR1A_reg) *= 160 / 100.0f;
} 