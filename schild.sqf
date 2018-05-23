// Kein Nutzen, Code vom Schild
this addAction ["Nummernschild ändern",{
	if (nearestObject [player, "Car"] distance player > 15) then {
    	hint "Es ist kein passendes Fahrzeug in der Nähe.";
    	} else {
    	_handle = createDialog "LicensePlateMenu";
    };
},[],1,true,true,"","",5];