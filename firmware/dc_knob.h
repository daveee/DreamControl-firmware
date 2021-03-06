/*
 * Virtual knob functions for DreamControl
 *
 * ==========================================================================
 *
 *  Copyright (C) 2018 Dave Evans (dave@propertech.co.uk)
 *  Licensed for personal non-commercial use only. All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _DC_KNOB_H
#define _DC_KNOB_H

/////////////////////////////////////////////////////////////////////////////
// global definitions
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// Type definitions
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern void DC_KNOB_Init();
extern void DC_KNOB_Test();
extern void DC_KNOB_MIDI_NotifyPackage(mios32_midi_port_t port, mios32_midi_package_t midi_package);
extern void DC_KNOB_NotifyChange(u32 encoder, s32 incrementer);
extern void DC_KNOB_SetCurrentKnob(u8 knob_index);
extern s8 DC_KNOB_GetKnobValue(u8 knob_index);
extern void DC_KNOB_SetRingColour(s16 hue);

void DC_KNOB_UpdateLedRing();

/////////////////////////////////////////////////////////////////////////////
// Exported variables
/////////////////////////////////////////////////////////////////////////////


#endif
