private _ids = [CBA_ClientID, 2];
{
  private _id = owner _x;
  if (_id == 0) then {continue};
  _ids pushBackUnique _id;
} forEach (entities "HeadlessClient_F");
_ids = _ids arrayIntersect _ids;
_ids
