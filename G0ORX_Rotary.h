/*
 * Rotary encoder library for Arduino.
 */

#ifdef G0ORX_FRONTPANEL

#ifndef G0ORX_Rotary_h
#define G0ORX_Rotary_h

#define NEW_CODE

// Enable weak pullups
#define ENABLE_PULLUPS
// KI3P: if defined, reverse direction of encoders
//#define REVERSE

// Enable this to emit codes twice per step.
//#define HALF_STEP

// Values returned by 'process'
// No complete step yet.
#define DIR_NONE 0
// Clockwise step.
#define DIR_CW 1
// Counter-clockwise step.
#define DIR_CCW 2


class G0ORX_Rotary
{
  public:
    G0ORX_Rotary();
    void updateA(unsigned char aState);
    void updateB(unsigned char bState);
    int process();

  private:
    int aLastState;
    int bLastState;
    int value;
};

#endif
#endif
