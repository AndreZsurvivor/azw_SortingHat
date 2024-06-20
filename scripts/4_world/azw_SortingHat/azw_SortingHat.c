class azw_SortingHat : CowboyHat_black
{
	static const string	SORTING_SOUND = "azw_TestTones_SoundSet";
	EffectSound m_HatSound;
    override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);
		
		if ( slot_id == InventorySlots.HEADGEAR || slot_id == InventorySlots.MASK )
		{
			Print("yippiekayeehy");
			m_HatSound = SEffectManager.PlaySoundOnObject(SORTING_SOUND, this, 0, 0);
		}

	}

};