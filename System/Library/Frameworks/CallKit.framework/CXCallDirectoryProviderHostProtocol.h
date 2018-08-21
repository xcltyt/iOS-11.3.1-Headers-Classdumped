/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXCallDirectoryProviderHostProtocol <NSObject>
@required
-(oneway void)isIncrementalLoadingAllowed:(/*^block*/id)arg1;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllBlockingEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllIdentificationEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1;

@end
