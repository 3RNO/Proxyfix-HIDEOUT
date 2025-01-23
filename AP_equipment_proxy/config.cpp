class CfgPatches
{
	class AP_equipment_proxy
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class AP_equipment_proxy
	{
		dir="AP_equipment_proxy";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="AP_equipment_proxy";
		credits="Azrael";
		author="Al-Azrael";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"AP_equipment_proxy/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"AP_equipment_proxy/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"AP_equipment_proxy/scripts/5_Mission"
				};
			};
		};
	};
};
class cfgVehicles
{
	class AllVehicles;
	class Man: AllVehicles
	{
	};
	class SurvivorBase: Man
	{
		class DayZPlayer
		{
			class P3DAttachments
			{
				P3DProxies[]+=
				{
					"spine",
					"rightupleg",
					"rightuplegroll",
					"rightarmextra"
				};
				BoneNames[]+=
				{
					"Spine",
					"RightUpLeg",
					"RightUpLegRoll",
					"RightArmExtra"
				};
			};
		};
		attachments[]+=
		{
			"AP_slot_man_unload",
			"AP_slot_man_headset"
		};
		class InventoryEquipment
		{
			playerSlots[]+=
			{
				"Slot_AP_slot_man_unload",
				"Slot_AP_slot_man_headset"
			};
		};
	};
	class SurvivorMale_Base: SurvivorBase
	{
		model="\AP_equipment_proxy\proxy\character_proxies.p3d";
	};
	class SurvivorFemale_Base: SurvivorBase
	{
		model="\AP_equipment_proxy\proxy\character_proxies.p3d";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyapeqp_proxy1: ProxyAttachment
	{
		inventorySlot[]=
		{
			"AP_slot_man_headset"
		};
		model="AP_equipment_proxy\proxy\apeqp_proxy1.p3d";
	};
	class Proxyapeqp_proxy2: ProxyAttachment
	{
		inventorySlot[]=
		{
			"AP_slot_man_unload"
		};
		model="AP_equipment_proxy\proxy\apeqp_proxy2.p3d";
	};
};
