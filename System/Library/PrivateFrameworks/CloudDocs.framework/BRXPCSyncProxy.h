/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSObject, NSError;

@interface BRXPCSyncProxy : NSProxy {

	NSObject* _target;
	NSError* _error;
	id _result;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)result;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setResult:(id)arg1 ;
-(void)setObjResult:(id)arg1 error:(id)arg2 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setBoolResult:(BOOL)arg1 error:(id)arg2 ;
@end
