/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionTaskContext.h>

@class NSString, NSFileHandle;

@interface HDClinicalIngestionTaskMutableContext : HDClinicalIngestionTaskContext {

	unsigned long long options;
	NSString* reason;

}

@property (assign,nonatomic) unsigned long long options; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,retain) NSFileHandle * inputFileHandle; 
-(void)setInputFileHandle:(NSFileHandle *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end
