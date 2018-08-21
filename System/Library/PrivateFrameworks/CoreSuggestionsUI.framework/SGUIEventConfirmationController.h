/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGUISuggestionConfirmationController.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@class SGRealtimeEvent, NSString;

@interface SGUIEventConfirmationController : SGUISuggestionConfirmationController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate> {

	SGRealtimeEvent* _realtimeEvent;
	/*^block*/id _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)confirmSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)rejectSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_eventsSuggestionsService;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)confirmSuggestion:(id)arg1 withPresentationHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
