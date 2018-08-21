/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface TSKCOOperationTransformHistory : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _history;

}
-(id)willTransformOperation:(id)arg1 withOperation:(id)arg2 ;
-(void)didTransformOperationWithResult:(id)arg1 token:(id)arg2 ;
-(id)init;
-(id)description;
@end
