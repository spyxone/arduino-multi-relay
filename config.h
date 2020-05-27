// For mono-stable buttons it will trigger state: LOW - when button is pressed, HIGH - when button is released
const uint8_t MONO_STABLE_TRIGGER = LOW;

// time interval for RELAY_IMPULSE type relay, ignored when button type is DING_DONG or REED_SWITCH
unsigned long RELAY_IMPULSE_INTERVAL = 250;


// Row params: sensor ID - sensor ID reported on MySensor Gateway
//             relay pin - Expander supported
//             button pin - <0 for virtual buttons (only available in MySensor Gateway); no support for Expander
//             relay options - [RELAY_TRIGGER_LOW|RELAY_TRIGGER_HIGH] {RELAY_STARTUP_ON|RELAY_STARTUP_OFF} {RELAY_IMPULSE}
//             button type - [MONO_STABLE|BI_STABLE|DING_DONG|REED_SWITCH]
//             relay description - reported on MySensor Gateway, can help identify device on initial configuration in Home Automation App, can be empty ("")
RelayButton myRelayButtons[] = {

//Dolny rząd ekspader strona 1
{0, E(0,0), A0, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},  //podpiete 5v
{1, E(0,1), A1, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{2, E(0,2), A2, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{3, E(0,3), A3, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{4, E(0,4), A4, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{5, E(0,5), A5, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{6, E(0,6), A6, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{7, E(0,7), A7, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{8, E(1,0), A8, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //podpiete 5v ssr
{9, E(1,1), A9, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{10, E(1,2), A10, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{11, E(1,3), A11, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{12, E(1,4), A12, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{13, E(1,5), A13, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{14, E(1,6), A14, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{15, E(1,7), A15, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
//Gorny rząd ekspander strona 1
{16, E(0,8), 0, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{17, E(0,9), 2, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{18, E(0,10), 3, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{19, E(0,11), 4, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{20, E(0,12), 5, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{21, E(0,13), 6, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{22, E(0,14), 7, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{23, E(0,15), 8, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{24, E(1,8), 9, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{25, E(1,9), 10, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{26, E(1,10), 11, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{27, E(1,11), 12, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{28, E(1,12), 13, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{29, E(1,13), 14, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{30, E(1,14), 15, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{31, E(1,15), 16, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
//dolny rząd ekspander strona 2 gdzie zasilanie
{32, E(2,0), 17, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{33, E(2,1), 19, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //18 nie moze byc
{34, E(2,2), 22, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, //20,21 niemoze byc
{35, E(2,3), 23, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{36, E(2,4), 24, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{37, E(2,5), 26, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{38, E(2,6), 27, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"}, // 25 nie moze byc
{39, E(2,7), 28, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{40, E(3,0), 29, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{41, E(3,1), 30, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{42, E(3,2), 31, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{43, E(3,3), 32, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{44, E(3,4), 33, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{45, E(3,5), 34, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{46, E(3,6), 35, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{47, E(3,7), 36, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
//górny rząd ekspander strona 2 gdzie zasilanie
{48, E(2,8), 37, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{49, E(2,9), 38, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{50, E(2,10), 39, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{51, E(2,11), 40, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{52, E(2,12), 41, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{53, E(2,13), 42, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{54, E(2,14), 43, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{55, E(2,15), 44, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{56, E(3,8), 45, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{57, E(3,9), 46, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v"},
{58, E(3,10), 47, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{59, E(3,11), 48, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{60, E(3,12), 49, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{61, E(3,13), 50, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{62, E(3,14), 51, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},
{63, E(3,15), 52, RELAY_TRIGGER_HIGH , MONO_STABLE, "5v ssr"},

};


//{11, 25, 5, RELAY_TRIGGER_HIGH, MONO_STABLE, "Halogen 1"},  // WŁ: Taras
//{12, 26, 6, RELAY_TRIGGER_HIGH, MONO_STABLE, "Halogen 2"},
//{13, 30, 7, RELAY_TRIGGER_HIGH, MONO_STABLE, "Halogen 3"},
