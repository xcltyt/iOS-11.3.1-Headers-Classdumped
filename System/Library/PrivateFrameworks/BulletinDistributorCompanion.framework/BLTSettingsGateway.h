/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject {

	BBSettingsGateway* _actualSettingsGateway;
	NSLock* _actualSettingsGatewayLock;
	int _token;

}
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)surrogateWithQueue:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
