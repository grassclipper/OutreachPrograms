
int blockColor;

void runAutonomous() {
	tHTIRS2 irSeeker;
	initSensor(&irSeeker, S3);

	blockColor = SensorValue[colorSensor];
	if(blockColor == (long)BLUECOLOR) {
		(bool)irSeeker.mode = (irSeeker.mode == DSP_1200);
		while(SensorValue(touchSensor) == 0) {
			motor[rightMotor] = 50;
			motor[leftMotor] = -50;
		}
	}
	else if(blockColor == (long)YELLOWCOLOR) {
		(bool)irSeeker.mode = (irSeeker.mode == DSP_600);
	}
}
