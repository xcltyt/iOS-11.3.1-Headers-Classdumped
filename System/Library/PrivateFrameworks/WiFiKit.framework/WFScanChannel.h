/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFScanChannel : NSObject {

	long long _channel;
	long long _flags;

}

@property (assign,nonatomic) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long flags;                //@synthesize flags=_flags - In the implementation block
-(long long)flags;
-(id)init;
-(id)description;
-(void)setChannel:(long long)arg1 ;
-(long long)channel;
-(void)setFlags:(long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
@end
