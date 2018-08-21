/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	TSUFlushingManager* mFlushingManager;
	int mInterest;
	os_unfair_lock_s mInterestLock;
	atomic<int> mRetainCount;
	atomic<int> mOwnerCount;

}

@property (nonatomic,readonly) unsigned long long imageGamut; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(BOOL)isValid;
-(void)flush;
-(CGSize)naturalSize;
-(id)imageData;
-(BOOL)isError;
-(id)initWithImageData:(id)arg1 ;
-(void)addInterest;
-(void)removeInterest;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)flushIfInterestLessThan:(int)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(unsigned long long)imageGamut;
-(void)i_commonInit;
-(BOOL)hasFlushableContent;
-(int)interest;
-(void)setFlushingManager:(id)arg1 ;
-(void)addOwner;
-(void)removeOwner;
-(void)ownerAccess;
@end
