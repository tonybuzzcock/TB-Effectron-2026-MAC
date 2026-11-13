// RingModClap.h
// The three entry functions clap-wrapper links into every format.

#pragma once

bool tbeffectron_entry_init (const char* pluginPath);
void tbeffectron_entry_deinit();
const void* tbeffectron_entry_get_factory (const char* factoryId);
