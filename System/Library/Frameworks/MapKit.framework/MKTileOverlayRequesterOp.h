/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSObject, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                          //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSData * data;                                           //@synthesize data=_data - In the implementation block
-(GEOTileKey)key;
-(void)cancel;
-(MKTileOverlayRequester *)delegate;
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)start;
-(void)setKey:(GEOTileKey)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
