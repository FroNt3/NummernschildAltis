private["_text","_maxCharacters", "_car"];
_text = ctrlText 1337;
_maxCharacters = 8;
_car = nearestObject [player, "Car"];

if (count _text > _maxCharacters) exitWith {hint format ["Es sind maximal %1 Zeichen erlaubt.", _maxCharacters]};
if ([_text,LicensePlate_Blacklist] call fnc_contains) exitWith {hint "Die Eingabe erhält unerlaubte Zeichenkombinationen."};

_car setPlateNumber _text;
closeDialog 0;