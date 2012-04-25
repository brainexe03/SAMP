PCMD:addpickup[MAPPER](playerid, params[], 96)
{
	new type[256];
	new Float:posX;
	new Float:posY;
	new Float:posZ;
	if (sscanf(params, "s", type))
	{
		CmdUsageMsg(playerid, "addpickup", "GASSTATION/TRUCKER/VEHICLEDEALER/POLICE/INBANK/ADAC/TAXI/ESTATEAGENTS/AMBULANCE/ARMEE/SCHOOLDRIVER");
		return COMMAND_USAGE;
	}
	type = strtoupper(type);
	if (!strcmp(type, "ARMEE", true) || !strcmp(type, "ADAC", true) || !strcmp(type, "AMBULANCE", true) || !strcmp(type, "ESTATEAGENTS", true) || !strcmp(type, "GASSTATION", true) || !strcmp(type, "INBANK", true) || !strcmp(type, "SCHOOLDRIVER", true) || !strcmp(type, "POLICE", true) || !strcmp(type, "TAXI", true) || !strcmp(type, "TRUCKER", true) || !strcmp(type, "VEHICLEDEALER", true))
	{
		GetPlayerPos(playerid, posX, posY, posZ);
		new id = AddPickup(-1, type, posX, posY, posZ, true);
		if (id > 0)
		{
			SendClientMessageEx(playerid, COLOR_INFO, 57, type, id);
			return COMMAND_OK;
		}
	}
	else
	{
		SendClientMessageEx(playerid, COLOR_ERROR, 58);
	}
	return COMMAND_ERROR;
}