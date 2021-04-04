class apm_missions
{
  class persistence
  {
    file = "functions\persistence";
    class saveWorld {};
    class loadWorld {};
    class savePlayer {};
    class loadPlayer {};
    class restartServer {};
    class saveWorldALiVE {};
  };
  class fob
  {
    file = "functions\fob";
    class createFOB {};
    class deleteFOB {};
    class fobTruck {};
    class currentFOB {};
    class upgradeFOB {};
    class initFob {preInit = 1};
    class loadFOB {};
    class menuFOB {};
    class refreshListFOB {};
    class saveFOB {};
    class supplyBox {};
  };
  class shop
  {
    file = "functions\shop";
    class updateShop {};
    class openShop {};
    class previewVehicle {};
    class refreshList {};
    class purchase {};
    class purchaseCondition {};
    class spawnVehicle {};
  };
  class logistics
  {
    file = "functions\logistics";
    class bulldoze {};
    class bulldozerHover {};
    class forkliftDrop {};
    class forkliftHover {};
    class forkliftModify {};
    class forkliftPickup {};
    class forkliftSystem {preInit = 1};
    class initBulldozer {};
    class initForklift {};
  };
  class admin
  {
    file = "functions\admin";
    class adminMenu {};
    class adminPlayerMenu {};
    class banPlayer {};
  };
  class server
  {
    file = "functions\server";
    class fpsmarker {};
    class abandonedroads {};
    class zeusChat {};
    class teleport {};
    class budgetHandler {};
  };
};
