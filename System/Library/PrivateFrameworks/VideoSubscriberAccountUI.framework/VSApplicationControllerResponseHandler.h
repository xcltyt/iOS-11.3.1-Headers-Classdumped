/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerResponseHandler : NSObject
-(void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2 ;
@end
