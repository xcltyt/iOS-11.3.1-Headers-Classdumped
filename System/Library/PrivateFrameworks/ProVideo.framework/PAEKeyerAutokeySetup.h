/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSCoding> {

	NSMutableArray* _initialSamples;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setInitialSamples:(id)arg1 ;
-(id)initialSamples;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
@end
