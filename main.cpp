#include "dataMacro.h"
#include "deviceInfo.cuh"

using namespace std;

int main()
{
	showDeviceInfo();
	real min_ = PLS_SMALL;
	real max_ = PLS_LARGE;
	label i = PLS_MAX_LABEL;

	cout << min_ << " " << max_ << " " << PLS_MAX_LABEL << endl;
}