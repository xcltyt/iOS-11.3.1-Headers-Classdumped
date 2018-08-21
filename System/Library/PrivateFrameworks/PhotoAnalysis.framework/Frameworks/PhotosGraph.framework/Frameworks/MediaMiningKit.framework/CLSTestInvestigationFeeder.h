/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(id)initWithItems:(id)arg1 ;
-(id)approximateLocation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)startDateComponents;
-(id)endDateComponents;
@end
