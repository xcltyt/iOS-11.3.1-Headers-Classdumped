/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILMessageFilterExtensionHostProtocol.h>

@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol> {

	/*^block*/id _deferQueryRequestToNetwork;
	/*^block*/id _deferReportRequestToNetwork;

}

@property (nonatomic,copy) id deferQueryRequestToNetwork;               //@synthesize deferQueryRequestToNetwork=_deferQueryRequestToNetwork - In the implementation block
@property (nonatomic,copy) id deferReportRequestToNetwork;              //@synthesize deferReportRequestToNetwork=_deferReportRequestToNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)finish;
-(id)deferQueryRequestToNetwork;
-(id)deferReportRequestToNetwork;
-(oneway void)deferQueryRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(oneway void)deferReportRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(void)handleQueryRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleReportRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeferQueryRequestToNetwork:(id)arg1 ;
-(void)setDeferReportRequestToNetwork:(id)arg1 ;
@end
