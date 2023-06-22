class CfgPatches 
{
	class DEGA_Vehicles_LPD_Liberty 
	{
		units[] = 
		{
			"DEGA_Land_Destroyer_01_base_F",
            "DEGA_Land_Destroyer_01_hull_05_F"			
		};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F_Beta", "A3_Data_F_Heli"};
	};
};
class Mod_Base;
class CfgMods 
{
	class DEGA_Nato : Mod_Base 
	{
        //#include "\dega_vehicles_ah99\data\release\mod.cpp"
	};
};	
class CfgVehicles
{
	class Land_Destroyer_01_base_F;
	class DEGA_Land_Destroyer_01_base_F: Land_Destroyer_01_base_F
	{
		author="$STR_A3_author_B01";
		model="\A3\Boat_F_Destroyer\Destroyer_01\Destroyer_01_hull_base_F.p3d";
		reversed=0;
		scope=2;
		scopeCurator=0;
		DLC="Jets";
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_assembled.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayName="DEGA LPD Liberty";
		mapsize=155;
		destrType=0;
		featureType=2;
		multiStructureParts[]=
		{
			
			{
				"Land_Destroyer_01_hull_01_F",
				"pos_hull_1"
			},
			
			{
				"Land_Destroyer_01_hull_02_F",
				"pos_hull_2"
			},
			
			{
				"Land_Destroyer_01_hull_03_F",
				"pos_hull_3"
			},
			
			{
				"Land_Destroyer_01_hull_04_F",
				"pos_hull_4"
			},
			
			{
				"DEGA_Land_Destroyer_01_hull_05_F",
				"pos_hull_5"
			},
			
			{
				"Land_Destroyer_01_interior_02_F",
				"pos_hull_2"
			},
			
			{
				"Land_Destroyer_01_interior_03_F",
				"pos_hull_3"
			},
			
			{
				"Land_Destroyer_01_interior_04_F",
				"pos_hull_4"
			},
			
			{
				"Land_HelipadEmpty_F",
				"pos_heliPad"
			},
		};	
		class Attributes
		{
			class CustomShipNameTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipNameTexture0";
				control="Edit";
				expression="([_this, 'Land_Destroyer_01_hull_05_F'] call bis_fnc_destroyer01GetShipPart) setObjectTextureGlobal [0, _value];";
				typeName="STRING";
				defaultValue="'a3\boat_f_destroyer\destroyer_01\data\destroyer_01_tag_01_co.paa'";
			};
			class CustomShipFlagTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipFlagTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipFlagTexture0";
				control="Edit";
				expression="([_this, 'ShipFlag_US_F'] call bis_fnc_destroyer01GetShipPart) setFlagTexture _value;";
				typeName="STRING";
				defaultValue="'a3\data_f\flags\flag_us_co.paa'";
			};
			class ShipHangarDoorState
			{
				displayName="$STR_3den_object_attribute_ShipHangarDoorState_displayname";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipHangarDoorState";
				control="CheckboxNumber";
				expression="[([_this, 'Land_Destroyer_01_hull_04_F'] call bis_fnc_destroyer01GetShipPart), _value, true] spawn bis_fnc_destroyer01AnimateHangarDoors;";
				defaultValue="0";
				typeName="NUMBER";
			};
			class ShipWellRampState
			{
				displayName="Well Ramp Doors Open";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipWellRampState";
				control="CheckboxNumber";
				expression="[([_this, 'DEGA_Land_Destroyer_01_hull_05_F'] call bis_fnc_destroyer01GetShipPart), _value, true] spawn dega_fnc_destroyer01AnimateHangarDoors;";
				defaultValue="0";
				typeName="NUMBER";
			};	
			class ShipWellMainState
			{
				displayName="Well Main Doors Open";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipWellMainState";
				control="CheckboxNumber";
				expression="[([_this, 'DEGA_Land_Destroyer_01_hull_05_F'] call bis_fnc_destroyer01GetShipPart), _value, true] spawn dega_fnc_destroyer01AnimateHangarDoors_1;";
				defaultValue="0";
				typeName="NUMBER";
			};				
			class CustomShipNumber1
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber1_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber1_tooltip";
				property="CustomShipNumber1";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_01_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 0] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="0";
				validate="number";
				typeName="NUMBER";
			};
			class CustomShipNumber2
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber2_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber2_tooltip";
				property="CustomShipNumber2";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_01_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 1] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="0";
				validate="number";
				typeName="NUMBER";
			};
			class CustomShipNumber3
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber3_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber3_tooltip";
				property="CustomShipNumber3";
				control="EditShort";
				expression="[([_this, 'Land_Destroyer_01_hull_01_F'] call bis_fnc_destroyer01GetShipPart), _value, 2] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="0";
				validate="number";
				typeName="NUMBER";
			};
		};		
	};
	class Land_Destroyer_01_hull_base_F;
	class DEGA_Land_Destroyer_01_hull_05_F: Land_Destroyer_01_hull_base_F
	{
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_hull5.jpg";
		displayName="DEGA Destroyer";
		model="\dega_vehicles_lpd_liberty\dega_lpd_liberty.p3d";
		
		class AnimationSources
		{		
			class Door_well_source
			{
				source="user";
				animPeriod=6;
				initPhase=0;
				sound = "ServoRampSound_2";				
			};
			class Door_Rear_Source
			{
				source="user";
				animPeriod=6;
				initPhase=0;
				sound = "ServoRampSound_2";				
			};				
        };	
	    class UserActions
		{
			class CloseRear // disabled
			{
				displayName= "Close Ramp Doors"; //Red
				position="point_button";
				radius=2;
				condition="this animationPhase ""Ramp"" > 0.45"; //this animationPhase ""Ramp"" > 0.45
				statement="this animate [""Ramp"",0];this animate [""LeftRamp"",0];this animate [""RightRamp"",0];this animate [""RampBarrier"",0];";
				priority=1;
				onlyForplayer=0;
			};
			class OpenRearRamp
			{
				displayName= "Open Ramp Doors"; //Red
				position="point_button";
				radius=2;
				condition="this animationPhase ""Ramp"" < 0.45"; //this animationPhase ""Ramp"" < 0.55
				statement="this animate [""Ramp"",1];this animate [""LeftRamp"",1];this animate [""RightRamp"",1];this animate [""RampBarrier"",1];";
				priority=1;
				onlyForplayer=0;
			}; 
			class CloseRear1 // disabled
			{
				displayName= "Close Ramp Doors"; //Red
				position="point_button1";
				radius=2;
				condition="this animationPhase ""Ramp"" > 0.45"; //this animationPhase ""Ramp"" > 0.45
				statement="this animate [""Ramp"",0];this animate [""LeftRamp"",0];this animate [""RightRamp"",0];this animate [""RampBarrier"",0];";
				priority=1;
				onlyForplayer=0;
			};
			class OpenRearRamp1
			{
				displayName= "Open Ramp Doors"; //Red
				position="point_button1";
				radius=2;
				condition="this animationPhase ""Ramp"" < 0.45"; //this animationPhase ""Ramp"" < 0.55
				statement="this animate [""Ramp"",1];this animate [""LeftRamp"",1];this animate [""RightRamp"",1];this animate [""RampBarrier"",1];";
				priority=1;
				onlyForplayer=0;
			};
 			class CloseRearMain // disabled
			{
				displayName= "Close Main Doors"; //Red
				position="point_button_rear";
				radius=2;
				condition="this animationPhase ""Door_Ramp_Barrier"" > 0.45"; //this animationPhase ""Ramp"" > 0.45
				statement="this animate [""Door_Ramp_Barrier"",0];this animate [""Door_Floor"",0];this animate [""Door_Top"",0];this animate [""Door_Bottom"",1];this animate [""Door_Ramp_Safety_1"",0];this animate [""Door_Ramp_Safety_2"",0];this animate [""Door_Ramp_Safety_3"",0];this animate [""Door_Ramp_Safety_4"",0];";
				priority=1;
				onlyForplayer=0;
			};
			class OpenRearMain
			{
				displayName= "Open Main Doors"; //Red
				position="point_button_rear";
				radius=2;
				condition="this animationPhase ""Door_Ramp_Barrier"" < 0.45"; //this animationPhase ""Ramp"" < 0.55
				statement="this animate [""Door_Ramp_Barrier"",1];this animate [""Door_Floor"",1];this animate [""Door_Top"",1];this animate [""Door_Bottom"",1];this animate [""Door_Ramp_Safety_1"",1];this animate [""Door_Ramp_Safety_2"",1];this animate [""Door_Ramp_Safety_3"",1];this animate [""Door_Ramp_Safety_4"",1];";
				priority=1;
				onlyForplayer=0;
			};  			
        };		
	};	
};
class CfgFunctions
{
	class DEGA_Destroyer
	{
		tag="DEGA";
		class Destroyer
		{
			file="dega_vehicles_lpd_liberty\data\function";
			class Destroyer01AnimateHangarDoors {};
			class Destroyer01AnimateHangarDoors_1 {};			
		};
    };
};