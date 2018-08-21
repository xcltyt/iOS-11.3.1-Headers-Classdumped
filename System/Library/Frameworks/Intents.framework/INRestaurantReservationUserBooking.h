/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INRestaurantReservationBooking.h>
#import <libobjc.A.dylib/INRestaurantReservationUserBookingExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurantGuest, NSString, INRestaurantOffer, NSDate;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying> {

	INRestaurantGuest* _guest;
	NSString* _advisementText;
	INRestaurantOffer* _selectedOffer;
	NSString* _guestProvidedSpecialRequestText;
	unsigned long long _status;
	NSDate* _dateStatusModified;

}

@property (nonatomic,copy) INRestaurantGuest * guest;                               //@synthesize guest=_guest - In the implementation block
@property (nonatomic,copy) NSString * advisementText;                               //@synthesize advisementText=_advisementText - In the implementation block
@property (nonatomic,copy) INRestaurantOffer * selectedOffer;                       //@synthesize selectedOffer=_selectedOffer - In the implementation block
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText;              //@synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText - In the implementation block
@property (assign,nonatomic) unsigned long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * dateStatusModified;                           //@synthesize dateStatusModified=_dateStatusModified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(INRestaurantGuest *)guest;
-(void)setGuest:(INRestaurantGuest *)arg1 ;
-(NSString *)advisementText;
-(INRestaurantOffer *)selectedOffer;
-(NSString *)guestProvidedSpecialRequestText;
-(NSDate *)dateStatusModified;
-(void)setAdvisementText:(NSString *)arg1 ;
-(void)setSelectedOffer:(INRestaurantOffer *)arg1 ;
-(void)setGuestProvidedSpecialRequestText:(NSString *)arg1 ;
-(void)setDateStatusModified:(NSDate *)arg1 ;
-(id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 status:(unsigned long long)arg6 dateStatusModified:(id)arg7 ;
@end
