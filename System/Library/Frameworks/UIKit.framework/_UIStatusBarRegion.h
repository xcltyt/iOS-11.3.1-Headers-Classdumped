/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIStatusBarRegionLayout;
#import <UIKit/UIKit-Structs.h>
@class NSString, _UIStatusBar, NSSet, _UIStatusBarStyleAttributes, UIView, _UIStatusBarAction, NSOrderedSet, NSMutableIndexSet, UILayoutGuide, NSArray, _UIStatusBarDisplayItem, NSDictionary;

@interface _UIStatusBarRegion : NSObject {

	NSString* _identifier;
	_UIStatusBar* _statusBar;
	id<_UIStatusBarRegionLayout> _layout;
	NSSet* _dependentRegionIdentifiers;
	double _alpha;
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _highlightView;
	_UIStatusBarAction* _action;
	NSOrderedSet* _displayItems;
	NSMutableIndexSet* _disablingTokens;
	UILayoutGuide* _layoutGuide;
	UIView* _frozenView;
	UIEdgeInsets _actionInsets;

}

@property (nonatomic,retain) NSMutableIndexSet * disablingTokens;                                  //@synthesize disablingTokens=_disablingTokens - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                                          //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,retain) UIView * frozenView;                                                  //@synthesize frozenView=_frozenView - In the implementation block
@property (nonatomic,readonly) NSArray * enabledDisplayItems; 
@property (nonatomic,readonly) NSArray * currentEnabledDisplayItems; 
@property (nonatomic,copy,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                      //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@property (nonatomic,retain) id<_UIStatusBarRegionLayout> layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSSet * dependentRegionIdentifiers;                                   //@synthesize dependentRegionIdentifiers=_dependentRegionIdentifiers - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@property (assign,nonatomic) double alpha;                                                         //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;              //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                               //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) _UIStatusBarAction * action;                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) UIEdgeInsets actionInsets;                                            //@synthesize actionInsets=_actionInsets - In the implementation block
@property (nonatomic,retain) NSOrderedSet * displayItems;                                          //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItem * overflowedDisplayItem; 
@property (nonatomic,copy,readonly) NSDictionary * displayItemAbsoluteFrames; 
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setAlpha:(double)arg1 ;
-(id)description;
-(UIView *)containerView;
-(_UIStatusBar *)statusBar;
-(NSString *)identifier;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(double)alpha;
-(_UIStatusBarAction *)action;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSString *)arg1 ;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(NSOrderedSet *)displayItems;
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(BOOL)isFrozen;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(id<_UIStatusBarRegionLayout>)layout;
-(UILayoutGuide *)layoutGuide;
-(NSArray *)currentEnabledDisplayItems;
-(id<UILayoutItem>)layoutItem;
-(void)_addSubview:(id)arg1 atBack:(BOOL)arg2 ;
-(void)setFrozenView:(UIView *)arg1 ;
-(NSArray *)enabledDisplayItems;
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setLayout:(id<_UIStatusBarRegionLayout>)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)disableWithToken:(unsigned long long)arg1 ;
-(void)enableWithToken:(unsigned long long)arg1 ;
-(_UIStatusBarDisplayItem *)overflowedDisplayItem;
-(NSDictionary *)displayItemAbsoluteFrames;
-(id)displayItemForHUDAtPointInContentView:(CGPoint)arg1 ;
-(NSSet *)dependentRegionIdentifiers;
-(void)setDependentRegionIdentifiers:(NSSet *)arg1 ;
-(UIView *)highlightView;
-(UIEdgeInsets)actionInsets;
-(void)setActionInsets:(UIEdgeInsets)arg1 ;
-(NSMutableIndexSet *)disablingTokens;
-(void)setDisablingTokens:(NSMutableIndexSet *)arg1 ;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(UIView *)frozenView;
@end
