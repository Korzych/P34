#pragma once
ref struct Kolor
{
	int r, g, b = 0;
	Kolor()
	{
		this->r = 0;
		this->g = 0;
		this->b = 0;
	}
};
ref struct Compfl
{
	//System::String r, g, b, t=gcnew System::String("");
	System::String^ r= gcnew System::String("");
	System::String^ g = gcnew System::String("");
	System::String^ b = gcnew System::String("");
	System::String^ t = gcnew System::String("");
	Compfl()
	{
		this->r="";
		this->g="";
		this->b="";
		this->t="";
		
	}
	Compfl(System::String^ ra, System::String^ ga, System::String^ ba, System::String^ ta)
	{
		this->r=ra;
		this->g=ga;
		this->b=ba;
		this->t=ta;

	}
};


