/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NMBUISyncSpecifierListener;
@class PSSpecifier, NMSSyncManager;

@interface NMBUISyncSpecifierProvider : NSObject {

	unsigned _mediaTypes;
	PSSpecifier* _syncProgressSpecifier;
	id<NMBUISyncSpecifierListener> _listener;
	NMSSyncManager* _syncManager;

}

@property (assign,nonatomic) unsigned mediaTypes;                                         //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic,__weak) id<NMBUISyncSpecifierListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NMSSyncManager * syncManager;                                //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) PSSpecifier * progressSpecifier;                           //@synthesize syncProgressSpecifier=_syncProgressSpecifier - In the implementation block
-(void)dealloc;
-(unsigned)mediaTypes;
-(void)setMediaTypes:(unsigned)arg1 ;
-(id<NMBUISyncSpecifierListener>)listener;
-(void)setListener:(id<NMBUISyncSpecifierListener>)arg1 ;
-(void)_updateProgress;
-(NMSSyncManager *)syncManager;
-(void)setSyncManager:(NMSSyncManager *)arg1 ;
-(PSSpecifier *)progressSpecifier;
-(id)initWithMediaTypes:(unsigned)arg1 listener:(id)arg2 ;
@end
