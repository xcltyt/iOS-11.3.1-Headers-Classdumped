/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface OKSynopsisInterpreter : NSObject {

	NSMutableDictionary* _objectCreators;
	NSMutableDictionary* _objectComparators;
	NSMutableArray* _guidelineItems;
	NSArray* _synopsis;

}

@property (nonatomic,retain) NSArray * synopsis;              //@synthesize synopsis=_synopsis - In the implementation block
-(void)dealloc;
-(NSArray *)synopsis;
-(void)setSynopsis:(NSArray *)arg1 ;
-(id)objectViewsFromGuidelineSynopsisItems:(id)arg1 ;
-(id)objectViewFromGuidelineSynopsisItem:(id)arg1 ;
-(id)guidelineSynopsisItemFromObjectView:(id)arg1 ;
-(id)initWithSynopsis:(id)arg1 ;
-(BOOL)hasSynopsis;
-(id)allGuidelineSynopsisItems;
-(id)allObjectsFromGuidelineSynopsisItems;
-(void)registerCreatorForItemType:(unsigned long long)arg1 initBlock:(/*^block*/id)arg2 ;
-(void)registerComparatorForItemType:(unsigned long long)arg1 compareBlock:(/*^block*/id)arg2 ;
-(id)guidelineSynopsisItemsFromObjectViews:(id)arg1 ;
@end
