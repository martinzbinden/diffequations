#include <iostream>
#include <fstream>

using namespace std;



int main(){

	int ncx, ncy;
    double xmin, xmax, ymin, ymax, dx, dy;
	cout << "xmin Startwert in X Richtung der Kontrollfläche" << endl;
	cin >> xmin;
	cout << "xmax Endwert in X Richtung der Kontrollfläche" << endl;
	cin >> xmax;
	cout << "ncx Anzahl Zellen in X Richtung" << endl;
	cin >> ncx;
	cout << "ymin Startwert in Y Richtung der Kontrollfläche" << endl;
	cin >> ymin;
	cout << "ymax Endwert in Y Richtung der Kontrollfläche" << endl;
	cin >> ymax;
	cout << "ncy Anzahl Zellen in Y Richtung" << endl;
	cin >> ncy;


	

	// initialisieren zweier Arrays x,y 
	double x[ncx+1];
	double y[ncy+1];
	// Berechnung der Schrittweite dx, dy
	dx=(xmax-xmin)/ncx;
	dy=(ymax-ymin)/ncy;
	
	cout << "dx = " << dx << endl;
	cout << "dy = " << dy << endl;

	
	
	double u[ncx+2][ncy+1];
	double v[ncx+1][ncy+1];
	double p[ncx+1][ncy+1];
	
	

	// Definieren der beiden Arrays
	for (int i=0; i<ncx+1; i++)
	{
		x[i]=xmin + i*dx;
		cout << x[i] << "" << endl;	
	}

	for (int j=0; j<ncy+1; j++)
	{
		y[j]=ymin + j*dy;
		cout << y[j] << "" << endl;	
	}
	
	// Definieren von u, v, p
	for (int i=1; i<ncx+2; i++)
	{
		for (int j=1; j<ncy; j++)
		{
			u[i][j]=1+2*x[i-1]+3*y[j-1];
			cout << u[i,j] << endl;
		}
	}
	
	
	return 0;




}
	



	
