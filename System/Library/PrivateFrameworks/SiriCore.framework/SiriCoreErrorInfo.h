/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface SiriCoreErrorInfo : NSObject {

	BOOL _isPeerConnectionError;
	BOOL _isPeerNotNearbyError;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isPeerConnectionError;              //@synthesize isPeerConnectionError=_isPeerConnectionError - In the implementation block
@property (assign,nonatomic) BOOL isPeerNotNearbyError;               //@synthesize isPeerNotNearbyError=_isPeerNotNearbyError - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)isPeerConnectionError;
-(void)setIsPeerConnectionError:(BOOL)arg1 ;
-(BOOL)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(BOOL)arg1 ;
@end
