/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@interface SXMapComponentSizer : SXComponentSizer
+(BOOL)isSpanSetOnRegion:(SCD_Struct_SX17)arg1 ;
+(BOOL)isCenterSetOnRegion:(SCD_Struct_SX17)arg1 ;
+(SCD_Struct_SX17)regionForCoordinates:(id)arg1 ;
+(SCD_Struct_SX17)regionFromRegion:(SCD_Struct_SX17)arg1 coordinates:(id)arg2 ;
+(SCD_Struct_SX18)mapRectForRegion:(SCD_Struct_SX17)arg1 ;
-(double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2 ;
@end
