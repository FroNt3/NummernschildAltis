class LicensePlateMenu
{
    idd=-1;
    movingenable=false;   
    
    class controls
    {

	class LicensePlateMenud_frame: RscFrame
	{
		idc = -1;	
		x = 0.391719 * safezoneW + safezoneX;
		y = 0.423 * safezoneH + safezoneY;
		w = 0.216563 * safezoneW;
		h = 0.099 * safezoneH;
	};
	class LicensePlateMenu_box: RscBox
	{
		idc = -1;
		sizeEx = 0.035;
		x = 0.391719 * safezoneW + safezoneX;
		y = 0.423 * safezoneH + safezoneY;
		w = 0.216563 * safezoneW;
		h = 0.099 * safezoneH;
	};
	class LicensePlateMenu_text: RscText
	{
		idc = -1;
		text = "Gib eine Zeichenfolge für dein Nummernschild ein:";
		sizeEx = 0.035;
		x = 0.396875 * safezoneW + safezoneX;
		y = 0.419 * safezoneH + safezoneY;
		w = 0.221719 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class LicensePlateMenu_Picture: RscPicture
	{
		idc = 1200;
		text = "LicensePlate.paa";
		x = 0.396875 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.154687 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class LicensePlateMenu_edit: RscEdit
	{
		idc = 1337;
		text = "";
		colorBackground[] = 
	    	{
	        	0,
	        	0,
	        	0,
	        	0
	    	};
		colorText[] = 
	    	{
	        	0,
	        	0,
	        	0,
	        	0.95
	    	};
		x = 0.396875 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.154687 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class LicensePlateMenu_button_ok: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 0.561875 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.04125 * safezoneW;
		h = 0.055 * safezoneH;
		action = "_nil = []execVM ""fn_changeLicensePlate.sqf""";
	};
    };
};