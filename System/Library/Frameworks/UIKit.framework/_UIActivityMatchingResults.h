/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, _UIActivityMatchingContext, NSArray;

@interface _UIActivityMatchingResults : NSObject {

	NSMutableSet* _excludedActivityTypesSet;
	_UIActivityMatchingContext* _context;
	NSArray* _orderedActivities;

}

@property (nonatomic,retain) NSArray * orderedActivities;                         //@synthesize orderedActivities=_orderedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityMatchingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * excludedActivityTypes; 
-(_UIActivityMatchingContext *)context;
-(NSArray *)excludedActivityTypes;
-(id)initWithActivityMatchingContext:(id)arg1 ;
-(void)addExcludedActivityTypes:(id)arg1 ;
-(void)setOrderedActivities:(NSArray *)arg1 ;
-(NSArray *)orderedActivities;
@end
