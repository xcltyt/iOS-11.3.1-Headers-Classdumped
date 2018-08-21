/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>
#import <libobjc.A.dylib/PKPaymentWebServiceArchiver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deviceRegion;
-(void)dealloc;
-(id)context;
-(NSXPCConnection *)connection;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)_invalidateConnection;
-(id)_proxy;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)contextWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(BOOL)claimSecureElementForCurrentUser;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2 ;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)secureElementIdentifiers;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(id)deviceName;
@end
