/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASReportAConcernReason : NSObject {

	NSString* _reasonID;
	NSString* _name;
	NSString* _uppercaseName;

}

@property (nonatomic,copy) NSString * reasonID;                   //@synthesize reasonID=_reasonID - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uppercaseName;              //@synthesize uppercaseName=_uppercaseName - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)reasonID;
-(NSString *)uppercaseName;
-(void)setReasonID:(NSString *)arg1 ;
-(void)setUppercaseName:(NSString *)arg1 ;
@end
