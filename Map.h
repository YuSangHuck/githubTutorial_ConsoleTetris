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
	Mapinfo **getMap();	
	void setMap(Block *pBlock);
	//check if map include complete lines.
	//fail -> -1, succeed -> number of lines
	int checkLines();
	void deleteLine();
	~Map();
};
