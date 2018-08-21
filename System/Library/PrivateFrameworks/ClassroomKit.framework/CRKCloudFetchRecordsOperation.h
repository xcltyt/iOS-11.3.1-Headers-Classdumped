/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class NSArray;

@interface CRKCloudFetchRecordsOperation : CRKCloudOperation <CRKCloudResetable> {

	NSArray* _recordIds;

}

@property (nonatomic,readonly) NSArray * recordIds;              //@synthesize recordIds=_recordIds - In the implementation block
-(void)main;
-(id)resetOperation;
-(NSArray *)recordIds;
-(id)initWithDatabase:(id)arg1 recordIds:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
@end
