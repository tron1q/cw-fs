#include <stdio.h>
#include <string.h>
#include "sampgdk.h"

/**
* @brief Command text callback function which is called when a player enters a internal command.
* @param playerid The ID of the player who entered a command.
* @param cmdtext The command text the player entered.
*/
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerCommandText(int playerid, const char *cmdtext)
{
    if (strcmp(cmdtext, "/cwtgcreditos") == 0 || strcrmp(cmdtext, "/cwtgdevs") == 0)
    {
        SendClientMessage(playerid, 0xFFFFFFFF, "This CW/TG filterscript was developed by leoarayav");
        return true;
    }
    return false;
}

/**
* @brief Supports function which is called when the plugin is loaded.
* @return The plugin support flags.
*/
PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
    return sampgdk::Supports() | SUPPORTS_PROCESS_TICK;
}

/**
* @brief Process tick callback function which is called on every server tick.
* @param **ppData A pointer to the plugin data pointer array.
* @return The callback status.
*/
PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData)
{
    return sampgdk::Load(ppData);
}

/**
* @brief Unload callback function which is called when the plugin is unloaded.
* @return The callback status.
*/
PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
    return sampgdk::Unload();
}