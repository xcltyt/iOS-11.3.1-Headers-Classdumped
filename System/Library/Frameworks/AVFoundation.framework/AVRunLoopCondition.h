/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(void)waitInMode:(id)arg1 ;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)broadcast;
-(void)wait;
@end
