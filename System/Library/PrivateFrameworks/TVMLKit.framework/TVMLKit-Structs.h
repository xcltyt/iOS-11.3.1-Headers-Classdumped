/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPath* CGPathRef;

typedef struct __CFString* CFStringRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct TVCornerRadii {
	double topLeft;
	double topRight;
	double bottomLeft;
	double bottomRight;
} TVCornerRadii;

typedef struct CGContext* CGContextRef;

typedef struct _NSZone* NSZoneRef;

typedef struct TVRowMetrics {
	long long rowType;
	double rowHeight;
	CGSize rowPadding;
	CGSize rowInset;
	CGSize rowInsetAlt;
	CGSize rowMargin;
} TVRowMetrics;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct TVCellMetrics {
	CGSize cellSize;
	UIEdgeInsets cellPadding;
	UIEdgeInsets cellInset;
	UIEdgeInsets cellInsetAlt;
	UIEdgeInsets cellMargin;
} TVCellMetrics;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct {
	BOOL respondsToBackroundImageProxy;
	BOOL respondsToBackgroundImageRequiresBlur;
	BOOL respondsToBackdropNeeded;
	BOOL respondsToImageProxySize;
	BOOL respondsToBlurEffectStyle;
	BOOL respondsToPurgeBgImages;
	BOOL respondsToConfigureBgImageBackdropImage;
} SCD_Struct_TV14;

typedef struct __SecTask* SecTaskRef;
