#pragma once

class EndingBox : public Sprite
{
private:
	
public:
	EndingBox();
	~EndingBox();

	void start();
	void update();

	void UpdateScore(int val);
};