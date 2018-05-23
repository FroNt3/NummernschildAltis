private ["_key", "_blacklist_array", "_i", "_contains"];
_key = _this select 0;
_blacklist_array = _this select 1;
_i = 0;
_contains = false;

{
	if !((_key find (_blacklist_array select _i)) isEqualTo -1) then {
		_contains = true;

	};
	_i = _i + 1;
} forEach _blacklist_array;

_contains