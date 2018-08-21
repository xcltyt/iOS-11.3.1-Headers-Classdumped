/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * checkInURLs; 
@property (nonatomic,readonly) NSURL * webURL; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSURL *)webURL;
-(NSArray *)checkInURLs;
-(id)urlsForDealWithIdentifier:(id)arg1 ;
@end
