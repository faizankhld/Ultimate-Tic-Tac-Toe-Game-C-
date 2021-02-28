
class tictac
{
	char **ptr;
	int n;

public:

	tictac();
	void map();
	void draw();
	void draw1();
	void draw2();
	void draw3();
	void draw4();
	void draw5();
	bool winner();
	void input1();
	void input2();
	int select();
	int check();
	int wins();
	~tictac();
};

