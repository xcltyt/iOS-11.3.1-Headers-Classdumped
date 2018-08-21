/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject {

	NSString* _name;
	_SYSharedServiceDB* _db;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) _SYSharedServiceDB * db;              //@synthesize db=_db - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithServiceName:(id)arg1 ;
-(_SYSharedServiceDB *)db;
-(void)setDb:(_SYSharedServiceDB *)arg1 ;
@end
