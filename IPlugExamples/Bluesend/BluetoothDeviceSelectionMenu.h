#pragma once

#include "IControl.h"
#include "wdlstring.h"

class BluetoothDeviceSelectionMenu :
	public IPanelControl
{
public:
	BluetoothDeviceSelectionMenu(IPlugBase *pPlug, IRECT pRect, const char* pLabel);
	~BluetoothDeviceSelectionMenu();

	bool Draw(IGraphics* pGraphics);

	void OnMouseDown(int x, int y, IMouseMod* pMod);

	void doPopupMenu();

private:
	IPlugBase* mPlug;
	WDL_String mLabel;
};
