/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXMailPresenter, SXContactsPresenter;
@class NSString;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXMailPresenter> _mailPresenter;
	id<SXContactsPresenter> _contactsPresenter;

}

@property (nonatomic,readonly) id<SXMailPresenter> mailPresenter;                      //@synthesize mailPresenter=_mailPresenter - In the implementation block
@property (nonatomic,readonly) id<SXContactsPresenter> contactsPresenter;              //@synthesize contactsPresenter=_contactsPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXMailPresenter>)mailPresenter;
-(void)composeMailTo:(id)arg1 subject:(id)arg2 ;
-(void)addToContacts:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2 ;
@end
