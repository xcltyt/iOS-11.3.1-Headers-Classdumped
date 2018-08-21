/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	/*function pointer*/void* field1;
	int field2;
	double field3;
	double field4;
} SCD_Struct_CR0;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_CR2;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGContext* CGContextRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;
