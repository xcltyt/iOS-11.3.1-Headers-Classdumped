/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherTableView : UITableView {

	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
@end
