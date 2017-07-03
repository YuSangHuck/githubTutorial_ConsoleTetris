struct Mapinfo
{
	char isBlock;
	int color;
	//... add needed variable.
};

class Map
{
 private:
    int nCol, nRow;
    Mapinfo **pMap; 
 public:
 	Map(int nCol, int nRow);
	int **getMap();
	int setMap(Block *pBlock);
	//check if map include complete lines.
	int checkLine();
	~Map();
};
