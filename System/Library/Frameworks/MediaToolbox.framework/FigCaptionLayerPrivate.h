/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject {

	OpaqueFigCFCaptionRendererRef renderer;
	NSMutableArray* captionElementLayers;
	OpaqueFigSimpleMutexRef renderMutex;
	OpaqueFigReentrantMutexRef layoutSublayersMutex;
	unsigned char shouldDrawGrid;
	NSMutableArray* captionBackdropLayers;
	unsigned char enableBackdrop;

}
@end
