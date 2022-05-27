#pragma once

namespace rh {

	const float C0 = 16.351f;
	const float C1 = 32.703f;
	const float C2 = 65.406f;
	const float C3 = 130.812f;
	const float C4 = 261.625f;
	const float C5 = 523.251f;
	const float C6 = 1046.502f;
	const float C7 = 2093.004f;
	const float C8 = 4186.008f;
	const float C9 = 8372.016f;
	const float C10 = 16744.032f;

	const float CS0 = 17.323f;
	const float CS1 = 34.647f;
	const float CS2 = 69.295f;
	const float CS3 = 138.591f;
	const float CS4 = 277.182f;
	const float CS5 = 554.365f;
	const float CS6 = 1108.730f;
	const float CS7 = 2217.460f;
	const float CS8 = 4434.920f;
	const float CS9 = 8869.840f;
	const float CS10 = 17739.680f;

	const float D0 = 18.354f;
	const float D1 = 36.708f;
	const float D2 = 73.416f;
	const float D3 = 146.832f;
	const float D4 = 293.664f;
	const float D5 = 587.329f;
	const float D6 = 1174.059f;
	const float D7 = 2344.318f;
	const float D8 = 4698.636f;
	const float D9 = 9397.272f;
	const float D10 = 18794.544f;

	const float DS0 = 19.445f;
	const float DS1 = 38.890f;
	const float DS2 = 77.781f;
	const float DS3 = 155.563f;
	const float DS4 = 311.126f;
	const float DS5 = 622.253f;
	const float DS6 = 1244.507f;
	const float DS7 = 2489.014f;
	const float DS8 = 4978.028f;
	const float DS9 = 9956.056f;
	const float DS10 = 19912.112f;

	const float E0 = 20.601f;
	const float E1 = 41.203f;
	const float E2 = 82.406f;
	const float E3 = 164.813f;
	const float E4 = 329.627f;
	const float E5 = 659.255f;
	const float E6 = 1318.510f;
	const float E7 = 2637.020f;
	const float E8 = 5274.040f;
	const float E9 = 10548.080f;
	const float E10 = 221096.160f;

	const float F0 = 21.826f;
	const float F1 = 43.653f;
	const float F2 = 87.307f;
	const float F3 = 174.614f;
	const float F4 = 349.228f;
	const float F5 = 698.456f;
	const float F6 = 1396.912f;
	const float F7 = 2793.824f;
	const float F8 = 5587.648f;
	const float F9 = 11175.296f;
	const float F10 = 22350.592f;

	const float FS0 = 23.124f;
	const float FS1 = 46.249f;
	const float FS2 = 92.498f;
	const float FS3 = 184.997f;
	const float FS4 = 369.994f;
	const float FS5 = 739.988f;
	const float FS6 = 1479.976f;
	const float FS7 = 2959.952f;
	const float FS8 = 5919.904f;
	const float FS9 = 11839.808f;
	const float FS10 = 23679.616f;

	const float G0 = 24.499f;
	const float G1 = 48.999f;
	const float G2 = 97.998f;
	const float G3 = 195.997f;
	const float G4 = 391.995f;
	const float G5 = 783.991f;
	const float G6 = 1567.982f;
	const float G7 = 3135.964f;
	const float G8 = 6270.928f;
	const float G9 = 12541.856f;
	const float G10 = 25083.712f;

	const float GS0 = 25.956f;
	const float GS1 = 51.913f;
	const float GS2 = 103.826f;
	const float GS3 = 207.652f;
	const float GS4 = 415.304f;
	const float GS5 = 830.609f;
	const float GS6 = 1661.218f;
	const float GS7 = 3322.436f;
	const float GS8 = 6644.872f;
	const float GS9 = 13289.744f;
	const float GS10 = 26579.488f;

	const float A0 = 27.500f;
	const float A1 = 55.000f;
	const float A2 = 110.000f;
	const float A3 = 220.000f;
	const float A4 = 440.000f;
	const float A5 = 880.000f;
	const float A6 = 1760.000f;
	const float A7 = 3520.000f;
	const float A8 = 7040.000f;
	const float A9 = 14080.000f;
	const float A10 = 28160.000f;

	const float AS0 = 29.135f;
	const float AS1 = 58.270f;
	const float AS2 = 116.540f;
	const float AS3 = 233.081f;
	const float AS4 = 466.163f;
	const float AS5 = 932.327f;
	const float AS6 = 1864.654f;
	const float AS7 = 3729.308f;
	const float AS8 = 7458.616f;
	const float AS9 = 14917.232f;
	const float AS10 = 29834.464f;
	
	const float B0 = 30.867f;
	const float B1 = 61.735f;
	const float B2 = 123.470f;
	const float B3 = 246.941f;
	const float B4 = 493.883f;
	const float B5 = 987.766f;
	const float B6 = 1975.532f;
	const float B7 = 3951.064f;
	const float B8 = 7902.128f;
	const float B9 = 15804.256f;
	const float B10 = 31608.512f;

}

class Wave
{
protected :
	float offset;

public  :
	Wave();
	virtual float getValue(float const& time)const = 0;
	virtual float getInverseValue(float const& time)const;

	void setOffset(float const& offset_);
};