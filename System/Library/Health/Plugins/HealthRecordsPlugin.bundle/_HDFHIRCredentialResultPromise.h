/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
@class HDFHIRCredentialResult;

@interface _HDFHIRCredentialResultPromise : NSObject {

	HDFHIRCredentialResult* _result;
	os_unfair_lock_s _resultLock;

}

@property (nonatomic,readonly) HDFHIRCredentialResult * result; 
-(void)fulfillWithResult:(id)arg1 ;
-(id)init;
-(HDFHIRCredentialResult *)result;
@end
