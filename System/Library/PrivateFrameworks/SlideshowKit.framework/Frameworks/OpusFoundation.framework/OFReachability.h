/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@interface OFReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFiRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(id)init;
-(void)dealloc;
-(long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)_networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentNetworkStatus;
-(void)stopNotifier;
-(BOOL)startNotifier;
-(BOOL)connectionRequired;
@end
