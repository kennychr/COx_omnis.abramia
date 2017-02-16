

class AW {
	tag= "AW"
	class AI {
		file = "Functions\AI";
		class ai_reinforceChopper 					{};
		class ai_reinforceMechanized 				{};
		class ai_spawnEnemy									{};
		class ai_setBehaviour								{};

	};

	class AmbAI	{
		file = "Functions\AmbAI";
		class amb_findPlayer 								{};
		class amb_findSpawnPos							{};
	};

	class Arsenal {
		file = "Functions\Arsenal";
		class arsenal_VA02									{};
	};

	class Emplacements {
		file = "Functions\Emplacements";
		class emp_createAAA 								{};
		class emp_createMG									{};
	};

	class Garbage {
		file = "Functions\Garbage";
		class garb_addDead									{};
		class garb_collectGarbage 					{};
	};
	class Loadouts {
		file = "Functions\Loadouts";
		class load_LEX											{};
	};

	class Map	{
		file = "Functions\Map";
		class map_findSpace									{};
		class map_findTown									{};
		class map_mapCenter									{};
	};
	class Misc {
		file = "Functions\Misc";
		class misc_fpsmon										{};
		class misc_randomPosTrigger					{};

	};
	class Radios {
		file = "Functions\Radios";

	};
	class Roster {
		file = "Functions\Roster";
		class roster_open_roster						{};
		class roster_roster									{};
	};

	class Server {
		file = "Functions\Server";
		class server_server_init 						{};
	};

	class Supplies {
		file = "Functions\Supplies";

	};

	class Tasks	{
		file = "Functions\Tasks";
		class task_makeTask								{};
		class task_taskInit									{};
		class task_missionName							{};
	};

};
