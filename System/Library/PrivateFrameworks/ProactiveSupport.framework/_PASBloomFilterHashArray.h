/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASBloomFilterHashArray : NSObject {

	unsigned long long _size;
	int* _data;

}

@property (nonatomic,readonly) int* hashes; 
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int*)hashes;
-(id)initInternal;
@end
