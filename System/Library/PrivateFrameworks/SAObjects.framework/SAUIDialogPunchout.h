/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SAUIButton, SAUIAssistantUtteranceView;

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic,retain) SAUIButton * buttonView; 
@property (nonatomic,retain) SAUIAssistantUtteranceView * utteranceView; 
+(id)dialogPunchout;
+(id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setButtonView:(SAUIButton *)arg1 ;
-(SAUIAssistantUtteranceView *)utteranceView;
-(void)setUtteranceView:(SAUIAssistantUtteranceView *)arg1 ;
-(SAUIButton *)buttonView;
@end
