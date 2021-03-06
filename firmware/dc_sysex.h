/*
 * MIDI System Exclusive (SysEx) functions for DreamControl
 *
 * ==========================================================================
 *
 *  Copyright (C) 2018 Dave Evans (dave@propertech.co.uk)
 *  Licensed for personal non-commercial use only. All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _DC_SYSEX_H
#define _DC_SYSEX_H

/////////////////////////////////////////////////////////////////////////////
// global definitions
/////////////////////////////////////////////////////////////////////////////

typedef enum {
    SYSEX_COMMAND_METER_DATA = 1,
    SYSEX_COMMAND_SYNC_BUTTONS = 2
} dc_sysex_command_t;

/////////////////////////////////////////////////////////////////////////////
// Type definitions
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern void DC_SYSEX_Init();
extern void DC_SYSEX_SendCommand(mios32_midi_port_t port, u8 sysex_command_code, const char *sysex_data);

s32 DC_SYSEX_Parser(mios32_midi_port_t port, u8 midi_in);
void DC_SYSEX_ReceiveCommand();

/////////////////////////////////////////////////////////////////////////////
// Exported variables
/////////////////////////////////////////////////////////////////////////////


#endif
