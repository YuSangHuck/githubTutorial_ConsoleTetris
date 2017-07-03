Map::Map(int nCol, int nRow)
{
  this->nCol = nCol;
  this->nRow = nRow;
  
  pMap = new Mapinfo* [nRow];
  for(int i = 0; i < this->nRow; i++){
    *(pMap + i) = new Mapinfo[nCol];
  }
}

Map::~Map()
{
   for(int i = 0; i < this->nRow; i++){
    delete[] *(pMap + i);
  }
  delete[] pMap;
}

Mapinfo ** Map::getMap()
{
  return pMap;
}

void Map::setMap(Block *pBlock)
{
  
}

int Map::checkLines()
{
  //iterate and if complete line found, then call deleteLine
}

void Map::deleteLine(int line)
{
  
}

