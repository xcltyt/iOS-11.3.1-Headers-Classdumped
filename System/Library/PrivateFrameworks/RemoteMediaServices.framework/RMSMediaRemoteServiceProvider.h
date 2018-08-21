/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMSServiceProvider.h>

@protocol RMSServiceProviderDelegate;
@class NSMapTable, NSString;

@interface RMSMediaRemoteServiceProvider : NSObject <RMSServiceProvider> {

	void* _televisionController;
	NSMapTable* _services;
	id<RMSServiceProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)endDiscovery;
-(void)beginDiscovery;
-(void)_didDiscoverTelevision:(void*)arg1 ;
-(void)_didRemoveTelevision:(void*)arg1 ;
-(id)_serviceWithTelevision:(void*)arg1 ;
@end
