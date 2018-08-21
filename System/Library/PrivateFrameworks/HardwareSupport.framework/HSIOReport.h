/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface HSIOReport : NSObject <NSCopying> {

	NSDictionary* _reportDictionary;
	NSArray* _channelDescriptions;

}

@property (nonatomic,retain) NSDictionary * reportDictionary;              //@synthesize reportDictionary=_reportDictionary - In the implementation block
@property (nonatomic,retain) NSArray * channelDescriptions;                //@synthesize channelDescriptions=_channelDescriptions - In the implementation block
+(id)report:(id*)arg1 ;
+(id)reportWithOnlySimpleChannels:(id*)arg1 ;
+(id)reportForDriversMatching:(id)arg1 error:(id*)arg2 ;
+(id)reportForDriver:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)snapshot:(id*)arg1 ;
-(id)initWithReportDictionary:(id)arg1 ;
-(NSDictionary *)reportDictionary;
-(NSArray *)channelDescriptions;
-(BOOL)isEqualToReport:(id)arg1 ;
-(id)reportByFilteringChannels:(/*^block*/id)arg1 ;
-(void)setReportDictionary:(NSDictionary *)arg1 ;
-(void)setChannelDescriptions:(NSArray *)arg1 ;
-(id)reportWithOnlySimpleChannels;
@end
