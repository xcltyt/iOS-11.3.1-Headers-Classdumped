/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSMutableSet;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {

	_UIStatusBarDisplayItemPlacement* _placement;
	_UIStatusBarRegion* _region;
	NSMutableSet* _exclusions;

}

@property (nonatomic,retain) NSMutableSet * exclusions;                                   //@synthesize exclusions=_exclusions - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * placement;              //@synthesize placement=_placement - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarRegion * region;                        //@synthesize region=_region - In the implementation block
@property (getter=isExcluded,nonatomic,readonly) BOOL excluded; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long priority; 
+(id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2 ;
-(id)description;
-(BOOL)isEnabled;
-(long long)priority;
-(_UIStatusBarRegion *)region;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(BOOL)isExcluded;
-(NSMutableSet *)exclusions;
-(void)setExclusions:(NSMutableSet *)arg1 ;
@end
