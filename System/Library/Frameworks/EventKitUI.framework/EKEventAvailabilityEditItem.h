/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {

	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSArray* _choices;
	unsigned long long _availabilityIndexInChoices;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
@end
