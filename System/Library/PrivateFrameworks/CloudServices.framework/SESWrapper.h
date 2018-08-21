/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRPClientRequest;
#import <CloudServices/CloudServices-Structs.h>
@class NSString, NSDate, NSData, NSDictionary;

@interface SESWrapper : NSObject {

	NSString* _decodedLabel;
	NSDate* _escrowDate;
	NSData* _recoveryBlob;
	ccses_crypto_t* _ccses;
	ccsrp_ctx* _srp;
	NSData* _escrowBlob;
	id<SRPClientRequest> _request;

}

@property (nonatomic,readonly) ccses_crypto_t* ccses;                            //@synthesize ccses=_ccses - In the implementation block
@property (nonatomic,readonly) ccsrp_ctx* srp;                                   //@synthesize srp=_srp - In the implementation block
@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) NSString * recordID; 
@property (nonatomic,retain,readonly) NSDictionary * escrowRecord; 
@property (nonatomic,copy) NSString * decodedLabel;                              //@synthesize decodedLabel=_decodedLabel - In the implementation block
@property (nonatomic,copy) NSDate * escrowDate;                                  //@synthesize escrowDate=_escrowDate - In the implementation block
@property (nonatomic,retain) NSData * escrowBlob;                                //@synthesize escrowBlob=_escrowBlob - In the implementation block
@property (nonatomic,retain,readonly) id<SRPClientRequest> request;              //@synthesize request=_request - In the implementation block
@property (retain) NSData * recoveryBlob;                                        //@synthesize recoveryBlob=_recoveryBlob - In the implementation block
-(void)dealloc;
-(id<SRPClientRequest>)request;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)label;
-(NSString *)recordID;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(id)srpInitBlob;
-(id)srpRecoveryBlobFromData:(id)arg1 error:(id*)arg2 ;
-(ccses_crypto_t*)ccses;
-(ccsrp_ctx*)srp;
-(void)setRecoveryBlob:(NSData *)arg1 ;
-(id)srpResponseForEscrowBlob:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)recoveryResponseForBlob:(id)arg1 ;
-(id)decodedEscrowRecordFromData:(id)arg1 ;
-(void)setEscrowDate:(NSDate *)arg1 ;
-(void)setDecodedLabel:(NSString *)arg1 ;
-(NSData *)recoveryBlob;
-(void)setEscrowBlob:(NSData *)arg1 ;
-(NSData *)escrowBlob;
-(id)encodedEscrowRecordWithPublicKey:(SecKeyRef)arg1 error:(id*)arg2 ;
-(NSString *)decodedLabel;
-(NSDate *)escrowDate;
-(NSString *)dsid;
@end
