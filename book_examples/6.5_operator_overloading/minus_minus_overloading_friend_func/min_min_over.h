class coord {
	int x;
	int y;
public:
	coord() : x(0), y(0) {};
	coord(int i, int j) : x(i), y(j) {};
	void get_coords();
	friend coord& operator--(coord& operand);
	friend coord& operator--(coord& operand, int notused);
};
