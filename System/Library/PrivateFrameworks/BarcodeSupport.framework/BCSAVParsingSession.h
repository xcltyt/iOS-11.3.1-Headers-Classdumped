/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCSQRCodeParser, NSDictionary;

@interface BCSAVParsingSession : NSObject {

	BCSQRCodeParser* _parser;
	NSDictionary* _lastScannedCodeBasicDescriptor;
	double _lastScannedTime;

}
-(id)init;
-(void)dealloc;
-(void)updateSessionWithMetadataObjects:(id)arg1 ;
-(BOOL)_isLikelyLastScannedObject:(id)arg1 ;
-(double)_temporalStickyFactorForObject:(id)arg1 ;
-(id)_bestObjectForParsing:(id)arg1 ;
-(void)updateSessionWithMetadataObject:(id)arg1 ;
@end
