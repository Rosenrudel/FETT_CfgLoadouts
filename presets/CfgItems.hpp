#define BASIC_SOLDIER \
{ \
	{"ACE_fieldDressing",6}, \
	{"ACE_morphine",2}, \
	"ACE_tourniquet" \
}

#define BASIC_COMBAT_MEDIC \
{ \
	{"ACE_fieldDressing",15}, \
	{"ACE_morphine",8}, \
	{"ACE_epinephrine",8}, \
	{"ACE_plasmaIV_250",8}, \
	{"ACE_plasmaIV_500",2}, \
	{"ACE_tourniquet",4}, \
}


#define IRONPACK_SOLDIER \
{ \
	{"ACE_fieldDressing",4}, \
	{"ACE_quikclot",4}, \
	{"ACE_morphine",2}, \
	"ACE_tourniquet" \
}

#define IRONPACK_COMBAT_MEDIC \
{ \
	{"ACE_fieldDressing",12}, \
	{"ACE_packingBandage",12}, \
	{"ACE_quikclot",12}, \
	{"ACE_elasticBandage",12}, \
	{"ACE_morphine",8}, \
	{"ACE_epinephrine",8}, \
	{"ACE_plasmaIV_250",8}, \
	{"ACE_tourniquet",4}, \
	{"ACE_splint",2}, \
	"ACE_surgicalKit" \
}

#define IRONPACK_MEDIC \
{ \
	{"ACE_fieldDressing",24}, \
	{"ACE_packingBandage",24}, \
	{"ACE_quikclot",24}, \
	{"ACE_elasticBandage",24}, \
	{"ACE_morphine",16}, \
	{"ACE_epinephrine",16}, \
	{"ACE_plasmaIV_250",8}, \
	{"ACE_plasmaIV_500",8}, \
	{"ACE_plasmaIV",8}, \
	{"ACE_tourniquet",8}, \
	{"ACE_splint",4}, \
	"ACE_surgicalKit" \
}

#define HARDCORE_SOLDIER \
{ \
	{"ACE_fieldDressing",4}, \
	{"ACE_quikclot",4}, \
	{"ACE_morphine",2}, \
	{"ACE_epinephrine",2}, \
	"ACE_tourniquet", \
	"kat_IV_16", \
	"kat_chestSeal", \
	"kat_PainkillerItem", \
	"kat_guedel", \
	"kat_Pulseoximeter", \
	"kat_CaffeineItem", \
	"kat_naloxone" \
}

#define HARDCORE_COMBAT_MEDIC \
{ \
	{"ACE_fieldDressing",12}, \
	{"ACE_packingBandage",12}, \
	{"ACE_quikclot",12}, \
	{"ACE_elasticBandage",12}, \
	{"ACE_morphine",8}, \
	{"ACE_epinephrine",8}, \
	{"ACE_salineIV_250",8}, \
	{"ACE_tourniquet",4}, \
	{"ACE_splint",2}, \
	"ACE_surgicalKit", \
	"kat_stethoscope", \
	{"kat_IV_16", 10}, \
	{"kat_chestSeal", 10}, \
	{"kat_guedel", 10}, \
	{"kat_naloxone", 5}, \
	{"kat_TXA", 4}, \
	{"kat_EACA", 2} \
}

#define HARDCORE_MEDIC \
{ \
	{"ACE_fieldDressing",24}, \
	{"ACE_packingBandage",24}, \
	{"ACE_quikclot",24}, \
	{"ACE_elasticBandage",24}, \
	{"ACE_morphine",16}, \
	{"ACE_epinephrine",16}, \
	{"ACE_salineIV_250",8}, \
	{"ACE_salineIV_500",8}, \
	{"ACE_salineIV",8}, \
	{"ACE_tourniquet",8}, \
	{"ACE_splint",4}, \
	"ACE_surgicalKit", \
	"kat_stethoscope", \
	"kat_retractor", \
	"kat_scalpel", \
	"kat_clamp", \
	{"kat_plate", 3}, \
	{"kat_IV_16", 10}, \
	{"kat_IO_FAST", 10}, \
	{"kat_chestSeal", 10}, \
	{"kat_guedel", 10}, \
	{"kat_larynx", 10}, \
	{"kat_naloxone", 5}, \
	{"kat_TXA", 5}, \
	{"kat_EACA", 5}, \
	{"kat_lorazepam", 3}, \
	{"kat_etomidate", 3}, \
	{"kat_flumazenil", 3}, \
	{"kat_nitroglycerin", 3}, \
	{"kat_norepinephrine", 3} \
}

class BasicItems : ItemsClass {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShell",4}
	};
	medicMaterial[] = IRONPACK_SOLDIER;
};

class SmallItems : BasicItems {
	grenades[] = {
		{"HandGrenade",2},
		{"SmokeShellRed",1},
		{"SmokeShellGreen",1},
		{"SmokeShell",2}
	};
};

class SpecialGrenades : BasicItems {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShellPurple",2},
		{"SmokeShellOrange",2},
		{"SmokeShell",2},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
};

class SpecialGrenadesSmall : BasicItems {
	grenades[] = {
		{"SmokeShellBlue",1},
		{"SmokeShellGreen",1},
		{"SmokeShellPurple",1},
		{"SmokeShellOrange",1},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
};

class CombatMedicItems : SmallItems {
	medicMaterial[] = IRONPACK_COMBAT_MEDIC;
};

class MedicItems : SpecialGrenadesSmall {
	medicMaterial[] = IRONPACK_MEDIC;
};

/*

	Medic Classnames - ACE:

	"ACE_fieldDressing"
	"ACE_packingBandage"
	"ACE_elasticBandage"
	"ACE_tourniquet"
	"ACE_morphine"
	"ACE_atropine"
	"ACE_epinephrine"
	"ACE_plasmaIV"
	"ACE_plasmaIV_500"
	"ACE_plasmaIV_250"
	"ACE_salineIV"
	"ACE_salineIV_500"
	"ACE_salineIV_250"
	"ACE_bloodIV"
	"ACE_bloodIV_500"
	"ACE_bloodIV_250"
	"ACE_quikclot"
	"ACE_personalAidKit"
	"ACE_surgicalKit"
	"ACE_bodyBag"

*/
