/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationSmootherClientInterface.h>

@protocol OS_dispatch_queue, CLLocationSmootherDelegate;
@class NSObject, NSXPCConnection, CLLocationSmoother, NSString;

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	id<CLLocationSmootherDelegate> _delegate;
	CLLocationSmoother* _locationManagerSmoother;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationSmootherDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationSmoother * locationManagerSmoother;              //@synthesize locationManagerSmoother=_locationManagerSmoother - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationManagerSmoother:(CLLocationSmoother *)arg1 ;
-(CLLocationSmoother *)locationManagerSmoother;
-(void)didSmoothLocations:(id)arg1 ofType:(id)arg2 ;
-(id)initWithCLLocationSmoother:(id)arg1 ;
-(id<CLLocationSmootherDelegate>)delegate;
-(void)setDelegate:(id<CLLocationSmootherDelegate>)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
@end
