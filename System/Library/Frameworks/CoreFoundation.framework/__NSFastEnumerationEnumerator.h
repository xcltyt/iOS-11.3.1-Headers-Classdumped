/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@protocol NSFastEnumeration;
@interface __NSFastEnumerationEnumerator : NSEnumerator {

	id<NSFastEnumeration> _obj;
	id _origObj;
	unsigned long long _index;
	unsigned long long _count;
	unsigned long long _mut;
	id _objects[16];
	SCD_Struct_NS26* _state;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
@end
