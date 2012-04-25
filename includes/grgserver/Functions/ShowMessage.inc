ShowMessage(playerID, messageID, waitTime = 3000)
{
	new stringID;
	switch (messageID)
	{
		case 1:
		{
			stringID = 276;
		}
		case 2:
		{
			stringID = 277;
		}
		case 3:
		{
			stringID = 278;
		}
		case 4:
		{
			stringID = 279;
		}
		case 5:
		{
			stringID = 280;
		}
		case 6:
		{
			stringID = 292;
		}
		case 7:
		{
			stringID = 293;
		}
		case 8:
		{
			stringID = 294;
		}
	}
	if (stringID)
	{
		ShowSubtitle(playerID, LanguageString(playerID, stringID));
		SetTimerEx("OnMessageShown", waitTime, false, "dd", playerID, messageID);
	}
}