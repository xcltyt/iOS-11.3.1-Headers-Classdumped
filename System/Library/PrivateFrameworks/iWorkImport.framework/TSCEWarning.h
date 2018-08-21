/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSCEWarning : NSObject {

	NSDictionary* mMetadata;
	BOOL mIgnored;

}
+(BOOL)setHasVisibleWarnings:(id)arg1 ;
+(void)reportNonNumericCellWarningInContext:(TSCEWarningReportingContext*)arg1 reference:(id)arg2 ;
+(void)reportMonthOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportDayOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportBoolToNumberConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportMismatchedSizesWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportLossOfUnitsWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportAutomaticUnitConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportComparisonWarningInContext:(TSCEWarningReportingContext*)arg1 leftType:(int)arg2 rightType:(int)arg3 ;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData<TSP::UUIDData>*)arg2 andCellID:(TSUCellCoord)arg3 ;
-(id)copyByRemappingEntityIDs:(id)arg1 ;
-(BOOL)isIgnored;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIgnored:(BOOL)arg1 ;
@end
