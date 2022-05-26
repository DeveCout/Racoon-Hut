#pragma once

#define C0 16.351
#define C1 32.703
#define C2 65.406
#define C3 130.812
#define C4 261.625
#define C5 523.251
#define C6 1046.502
#define C7 2093.004
#define C8 4186.008
#define C9 8372.016
#define C10 16744.032

#define CS0 17.323
#define CS1 34.647
#define CS2 69.295
#define CS3 138.591
#define CS4 277.182
#define CS5 554.365
#define CS6 1108.730
#define CS7 2217.460
#define CS8 4434.920
#define CS9 8869.840
#define CS10 17739.680

#define D0 18.354
#define D1 36.708
#define D2 73.416
#define D3 146.832
#define D4 293.664
#define D5 587.329
#define D6 1174.059
#define D7 2344.318
#define D8 4698.636
#define D9 9397.272
#define D10 18794.544

#define DS0 19.445
#define DS1 38.890
#define DS2 77.781
#define DS3 155.563
#define DS4 311.126
#define DS5 622.253
#define DS6 1244.507
#define DS7 2489.014
#define DS8 4978.028
#define DS9 9956.056
#define DS10 19912.112

#define E0 20.601
#define E1 41.203
#define E2 82.406
#define E3 164.813
#define E4 329.627
#define E5 659.255
#define E6 1318.510
#define E7 2637.020
#define E8 5274.040
#define E9 10548.080
#define E10 221096.160

#define F0 21.826
#define F1 43.653
#define F2 87.307
#define F3 174.614
#define F4 349.228
#define F5 698.456
#define F6 1396.912
#define F7 2793.824
#define F8 5587.648
#define F9 11175.296
#define F10 22350.592

#define FS0 23.124
#define FS1 46.249
#define FS2 92.498
#define FS3 184.997
#define FS4 369.994
#define FS5 739.988
#define FS6 1479.976
#define FS7 2959.952
#define FS8 5919.904
#define FS9 11839.808
#define FS10 23679.616

#define G0 24.499
#define G1 48.999
#define G2 97.998
#define G3 195.997
#define G4 391.995
#define G5 783.991
#define G6 1567.982
#define G7 3135.964
#define G8 6270.928
#define G9 12541.856
#define G10 25083.712

#define GS0 25.956
#define GS1 51.913
#define GS2 103.826
#define GS3 207.652
#define GS4 415.304
#define GS5 830.609
#define GS6 1661.218
#define GS7 3322.436
#define GS8 6644.872
#define GS9 13289.744
#define GS10 26579.488

#define A0 27.500
#define A1 55.000
#define A2 110.000
#define A3 220.000
#define A4 440.000
#define A5 880.000
#define A6 1760.000
#define A7 3520.000
#define A8 7040.000
#define A9 14080.000
#define A10 28160.000

#define AS0 29.135
#define AS1 58.270
#define AS2 116.540
#define AS3 233.081
#define AS4 466.163
#define AS5 932.327
#define AS6 1864.654
#define AS7 3729.308
#define AS8 7458.616
#define AS9 14917.232
#define AS10 29834.464

#define B0 30.867
#define B1 61.735
#define B2 123.470
#define B3 246.941
#define B4 493.883
#define B5 987.766
#define B6 1975.532
#define B7 3951.064
#define B8 7902.128
#define B9 15804.256
#define B10 31608.512

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