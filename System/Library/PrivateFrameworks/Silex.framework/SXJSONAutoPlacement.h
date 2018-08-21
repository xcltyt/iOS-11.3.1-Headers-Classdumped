/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAutoPlacement.h>

@class NSString;

@interface SXJSONAutoPlacement : SXJSONObject <SXAutoPlacement>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id<SXAdvertisementPlacementType>)advertisement;
-(NSString *)description;
@end
