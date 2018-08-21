/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo {

	CKShareMetadata* _shareMetadata;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,retain) CKShareMetadata * shareMetadata;              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * address;                             //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)address;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
@end
