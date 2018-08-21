/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(BOOL)enabled;
-(id)identifier;
-(CNPropertyAction *)propertyAction;
-(id)propertyItem;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(unsigned long long)score;
@end
