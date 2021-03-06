/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSNumber, INImage;


@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) unsigned long long defaultPartySize; 
@property (nonatomic,copy,readonly) NSDate * defaultBookingDate; 
@property (nonatomic,retain) NSNumber * maximumPartySize; 
@property (nonatomic,retain) NSNumber * minimumPartySize; 
@property (nonatomic,copy) INImage * providerImage; 
@required
-(id)init;
-(NSNumber *)minimumPartySize;
-(NSNumber *)maximumPartySize;
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(void)setMaximumPartySize:(id)arg1;
-(void)setMinimumPartySize:(id)arg1;
-(void)setProviderImage:(id)arg1;
-(INImage *)providerImage;

@end

