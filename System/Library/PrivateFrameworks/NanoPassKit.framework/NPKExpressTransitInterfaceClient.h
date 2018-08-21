/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface NPKExpressTransitInterfaceClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)displayExpressTransitTransactionCompleteWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 forPass:(id)arg3 paymentApplication:(id)arg4 withAppletState:(id)arg5 completion:(/*^block*/id)arg6 ;
@end
