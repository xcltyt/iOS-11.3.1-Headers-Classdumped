/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFMessageDestination : HMFObject {

	NSUUID* _target;

}

@property (nonatomic,copy,readonly) NSUUID * target;              //@synthesize target=_target - In the implementation block
+(id)shortDescription;
+(id)allMessageDestinations;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSUUID *)target;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
@end
