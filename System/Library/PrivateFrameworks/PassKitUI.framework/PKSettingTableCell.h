/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : PKTableViewCell {

	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SEL)action;
-(id)target;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(UISwitch *)settingSwitch;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end
