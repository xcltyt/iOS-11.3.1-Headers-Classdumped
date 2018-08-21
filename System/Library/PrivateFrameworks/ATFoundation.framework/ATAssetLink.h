/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)priority;
-(void)close;
-(BOOL)open;
-(unsigned long long)maximumBatchSize;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(BOOL)canEnqueueAsset:(id)arg1;
-(void)cancelAssets:(id)arg1;
-(void)prioritizeAsset:(id)arg1;
-(BOOL)linkIsReady;
-(BOOL)isOpen;

@end
