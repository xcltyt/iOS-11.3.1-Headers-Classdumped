/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DOMEventTarget <NSObject,NSCopying>
@required
-(BOOL)dispatchEvent:(id)arg1;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
-(void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
-(void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;

@end
