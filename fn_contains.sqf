private ["_key", "_blacklistArray", "_i", "_contains"];
_key = _this select 0;
_blacklistArray = _this select 1;
_i = 0;
_contains = false;

{
	if !((_key find (_blacklistArray select _i)) isEqualTo -1) then {
		_contains = true;

	};
	_i = _i + 1;
} forEach _blacklistArray;

_contains