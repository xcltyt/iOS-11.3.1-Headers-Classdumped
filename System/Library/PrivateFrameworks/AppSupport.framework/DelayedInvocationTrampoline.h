/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@interface DelayedInvocationTrampoline : InvocationTrampoline {

	double _delay;

}
-(id)initWithTarget:(id)arg1 delay:(double)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end
