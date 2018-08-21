/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>

@class CATOperationQueue;

@interface CRKCloudEncapsulatedOperation : CRKCloudOperation {

	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(CATOperationQueue *)operationQueue;
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
@end
