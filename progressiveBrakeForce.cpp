#include <iostream>

using namespace std;

// This function measures the current wheel-slip of the vehicle
float measureWheelSlip() {
  // TODO: implement this function
  return 0.0;
}

// This function applies a given brake force to the vehicle
void applyBrakeForce(float brakeForce) {
  // TODO: implement this function
}

int main() {
  // Set the initial brake force to 0
  float brakeForce = 0.0;

  // Set the wheel-slip threshold
  const float WHEEL_SLIP_THRESHOLD = 0.1;

  // Set the amount by which to increment the brake force when wheel-slip is detected
  const float BRAKE_FORCE_INCREMENT = 0.1;

  // Set the amount by which to decrement the brake force when wheel-slip is not detected
  const float BRAKE_FORCE_DECREMENT = 0.05;

  // Continuously monitor the wheel-slip and apply the brakes as necessary
  while (true) {
    // Measure the current wheel-slip of the vehicle
    float wheelSlip = measureWheelSlip();

    // If the wheel-slip is greater than the threshold, progressively increase the brake force
    if (wheelSlip > WHEEL_SLIP_THRESHOLD) {
      brakeForce += BRAKE_FORCE_INCREMENT;
      applyBrakeForce(brakeForce);
    } else {
      // If the wheel-slip is below the threshold, gradually decrease the brake force
      brakeForce -= BRAKE_FORCE_DECREMENT;
      applyBrakeForce(brakeForce);
    }
  }

  return 0;
}
