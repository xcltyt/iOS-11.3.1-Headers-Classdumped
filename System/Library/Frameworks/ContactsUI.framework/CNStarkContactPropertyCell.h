/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertyPhoneNumberCell.h>

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell {

	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(BOOL)wantsHorizontalLayout;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cnui_applyContactStyle;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)performDefaultAction;
-(void)transportButtonClicked:(id)arg1 ;
-(BOOL)shouldShowStar;
-(id)standardTransportIcon;
@end
