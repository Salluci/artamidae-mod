params [["_number", 0,[0]]];

_number = _number toFixed 0;
_number = _number splitString "";
reverse _number;
private _cnt = 0;
private _prettyNumber = [];
{
  _cnt = _cnt + 1;
  _prettyNumber pushBack _x;
  if (_cnt == 3 && {_forEachIndex != (count _number -1)}) then {
    _prettyNumber pushBack ",";
    _cnt = 0;
  };
} forEach _number;
reverse _prettyNumber;
_prettyNumber = _prettyNumber joinString "";

_prettyNumber
