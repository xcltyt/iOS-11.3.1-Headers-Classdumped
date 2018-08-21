/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _XCTestObservationCenterImplementation : NSObject {

	NSMutableArray* _observers;
	BOOL _suspended;

}

@property (retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign) BOOL suspended;                          //@synthesize suspended=_suspended - In the implementation block
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(BOOL)suspended;
@end
