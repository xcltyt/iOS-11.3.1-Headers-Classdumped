/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKUIGiftValidationResponse : NSObject {

	NSString* _errorString;
	NSString* _giftKey;
	NSString* _totalGiftAmountString;
	BOOL _valid;

}

@property (nonatomic,readonly) NSString * errorString;                        //@synthesize errorString=_errorString - In the implementation block
@property (nonatomic,readonly) NSString * giftKey;                            //@synthesize giftKey=_giftKey - In the implementation block
@property (nonatomic,readonly) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                     //@synthesize valid=_valid - In the implementation block
-(BOOL)isValid;
-(NSString *)totalGiftAmountString;
-(NSString *)errorString;
-(id)initWithValidationDictionary:(id)arg1 ;
-(NSString *)giftKey;
@end
