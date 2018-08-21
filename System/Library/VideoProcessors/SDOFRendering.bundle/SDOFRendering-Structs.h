/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/SDOFRendering.bundle/SDOFRendering
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_Bl0;

typedef struct blurmap_smoothing_params {
	int nIterations;
	float originalBlurValueT0;
	float originalBlurValueT1;
	float localMinimumBlurValueT0;
	float localMinimumBlurValueT1;
} blurmap_smoothing_params;

typedef struct face_mask_params {
	float maxBlur;
	 centreX;
	 centreY;
	 leftEyeX;
	 leftEyeY;
	 rightEyeX;
	 rightEyeY;
	 chinX;
	 chinY;
	float maxBlurOnEyes;
	float maxBlurDistFromFocus;
	float eyeToEyebrowRatio;
	float linearBlurGrowthM;
	float linearBlurGrowthC;
	float distToBlurScaling;
	float capMultip;
	float gainMultip;
	float chinThetaLimit;
	float chinThetaMultip;
	float chinVectorSnapping;
	float imageAspectRatio;
} face_mask_params;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	[3 columns];
} SCD_Struct_Fi7;

typedef struct {
	int hTaps;
	int vTaps;
	int hPhases;
	int vPhases;
	int prePointBits;
	int postPointBits;
} SCD_Struct_Fi8;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_Fi11;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct simple_lens_model_params_2 {
	float left;
	float top;
	float width;
	float height;
	float zeroShiftPercentile;
	float simulatedFocalLength;
	float simulatedAperture;
	float frameNormalizedFocalLength;
	float maxFGBlur;
	float maxBGBlur;
	float shiftDeadZone;
} simple_lens_model_params_2;

typedef struct rendering_config_params {
	float lumaNoiseAmplitude;
	float maxBlur;
	float sharpRadius;
	float softRadius;
	float lumaNoiseModelCoeff;
	float highlightBoostGain;
	int nSamples;
	float basePixelWeight;
	float spatialWeightSoftMin;
	float spatialWeightSoftMax;
	float antiAliasBlurStrength;
	float relativeWeightThreshold;
} rendering_config_params;
