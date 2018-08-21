/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _complications;
	NSMutableDictionary* _editModeConfigurations;
	NSMutableDictionary* _metrics;
	BOOL _resourceDirectoryExists;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL resourceDirectoryExists;              //@synthesize resourceDirectoryExists=_resourceDirectoryExists - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)complicationForSlot:(id)arg1 ;
-(void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)setComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)setResourceDirectoryExists:(BOOL)arg1 ;
-(void)appendEditModesToDailySnapshotKey:(id)arg1 ;
-(id)metricForKey:(id)arg1 ;
-(void)setMetric:(id)arg1 forKey:(id)arg2 ;
-(void)incrementMetricForKey:(id)arg1 ;
-(BOOL)resourceDirectoryExists;
-(void)addConfigurationKeysToJSONDictionary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2 ;
-(void)setMetricsFromConfiguration:(id)arg1 ;
-(id)validationString;
-(void)_enumerateEditModeConfigurationsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateComplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)_dateMetricsKeys;
-(void)_applyMetrics:(id)arg1 ;
-(void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2 ;
-(void)_applyComplicationsDescription:(id)arg1 ;
@end
