/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatusBarItem.h>

@class _UIBatteryView, _UIStatusBarImageView, _UIStatusBarStringView;

@interface _UIStatusBarBatteryItem : _UIStatusBarItem {

	BOOL _highlighted;
	_UIBatteryView* _batteryView;
	_UIStatusBarImageView* _chargingView;
	_UIStatusBarStringView* _percentView;

}

@property (nonatomic,retain) _UIBatteryView * batteryView;                      //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * chargingView;              //@synthesize chargingView=_chargingView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * percentView;              //@synthesize percentView=_percentView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
+(id)iconDisplayIdentifier;
+(id)chargingDisplayIdentifier;
+(id)percentDisplayIdentifier;
-(id)init;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(void)setChargingView:(_UIStatusBarImageView *)arg1 ;
-(void)setPercentView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarImageView *)chargingView;
-(_UIStatusBarStringView *)percentView;
-(_UIBatteryView *)batteryView;
-(BOOL)highlighted;
@end
