#include <iostream>

using namespace std;

int main()
{
// einlesen der Parameter
	int xmin, xmax, ncx, ymin, ymax, ncy;
	cout << "xmin" << endl;
	cin >> xmin;
	cout << "xmax" << endl;
	cin >> xmax;
	cout << "ncx" << endl;
	cin >> ncx;
	cout << "ymin" << endl;
	cin >> xmin;
	cout << "ymax" << endl;
	cin >> xmax;
	cout << "ncy" << endl;
	


// Erstellen eines Grids (2 dimensionales Array) mit ncx x ncy Zellen und Start-/Endpunkten xmin, xmax, ymin, ymax	
	double grid[ncx+1][ncy+1];

// Berechnen der Gitterabstände dx, dy	
	double dx = (xmax-xmin)/ncx;
	double dy = (ymax-ymin)/ncy;
	
	cout << "grid spacings: dx = " << dx << "  dy = " << dy << endl;
	
// Hier sollte wohl dann noch eine Ausgabefunktion kommen um das erstellte grad auf wxwidgets anzuzeigen
	
	return 0;
	
}	
