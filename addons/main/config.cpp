class CfgMods {
	class ire_yorha_insignia {
		dir = "@ire_yorha_insignia";
		name = "YoRHa Insignia";
		picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
		hidePicture = "true";
		hideName = "true";
	};
};

class CfgPatches {
	class ire_yorha_insignia_main {
		name = "YoRHa Insignia";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.02;
		requiredAddons[] = {};
		author = "tsar_bimbo";
		version = 1.2;
		versionStr = "1.2.0.0";
		versionAr[] = {1, 2, 0, 0};
	};
};

class CfgUnitInsignia {
	class ire_yorha {
		displayName = "YoRHa";
		author = "tsar_bimbo";
		texture = "\x\ire_yorha_insignia\yorha_ca.paa";
		textureVehicle = "";
	};
};
