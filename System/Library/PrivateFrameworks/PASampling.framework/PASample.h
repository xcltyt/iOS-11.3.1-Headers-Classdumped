/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PASample : NSObject <PASerializable> {

	NSMutableDictionary* _tasks;
	double _machTimestamp;
	double _wallTimestamp;
	PASample* _previousSample;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestamp;                          //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                          //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) NSArray * sampleTasks; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(double)machTimestamp;
-(id)init;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)addSampleTask:(id)arg1 ;
-(id)initWithMachTime:(double)arg1 andWallTime:(double)arg2 ;
-(id)sampleTaskForPid:(int)arg1 ;
-(NSArray *)sampleTasks;
-(id)initWithStackshot:(id)arg1 ;
-(double)wallTimestamp;
-(id)_initWithSerializedData:(const SCD_Struct_PA16*)arg1 ;
-(void)setMachTime:(double)arg1 ;
-(void)setWallTime:(double)arg1 ;
@end
