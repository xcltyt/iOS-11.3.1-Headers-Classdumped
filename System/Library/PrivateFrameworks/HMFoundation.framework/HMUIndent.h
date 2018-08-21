/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMUIndent : HMFObject {

	NSString* _level;
	NSString* _step;
	unsigned long long _factor;

}

@property (nonatomic,readonly) NSString * step;                        //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) unsigned long long factor;              //@synthesize factor=_factor - In the implementation block
@property (nonatomic,readonly) NSString * level;                       //@synthesize level=_level - In the implementation block
+(id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
+(id)indentWithLevel:(id)arg1 ;
-(NSString *)step;
-(id)description;
-(NSString *)level;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
-(unsigned long long)factor;
-(id)indentByFactor:(unsigned long long)arg1 ;
@end
