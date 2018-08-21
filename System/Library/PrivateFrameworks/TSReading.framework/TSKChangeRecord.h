/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKChangeRecord : NSObject {

	int mKind;
	id mDetails;

}

@property (nonatomic,readonly) int kind; 
@property (nonatomic,readonly) id details; 
@property (nonatomic,readonly) BOOL allowedInCommit; 
+(id)changeRecordWithKind:(int)arg1 details:(id)arg2 ;
-(id)details;
-(void)dealloc;
-(int)kind;
-(id)initWithKind:(int)arg1 details:(id)arg2 ;
-(BOOL)allowedInCommit;
@end
