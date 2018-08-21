/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel, CNTransportButton, CNCardActionGroupItem, CNContactAction;

@interface CNContactActionCell : CNLabeledCell {

	UILabel* _label;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNTransportButton * transportIcon;                      //@synthesize transportIcon=_transportIcon - In the implementation block
@property (nonatomic,readonly) CNCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) CNContactAction * action; 
-(CNContactAction *)action;
-(void)tintColorDidChange;
-(BOOL)shouldIndentWhileEditing;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CNTransportButton *)transportIcon;
-(id)rightMostView;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(void)setTransportIcon:(CNTransportButton *)arg1 ;
-(CNCardActionGroupItem *)actionGroupItem;
-(id)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end
