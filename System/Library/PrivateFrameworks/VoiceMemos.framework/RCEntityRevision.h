/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface RCEntityRevision : NSManagedObject

@property (nonatomic,readonly) long long revisionType; 
@property (nonatomic,readonly) long long revisionID; 
@property (nonatomic,readonly) long long recordingID; 
-(long long)recordingID;
-(void)setRecordingID:(long long)arg1 ;
-(void)setRevisionID:(long long)arg1 ;
-(void)setRevisionType:(long long)arg1 ;
-(long long)revisionID;
-(long long)revisionType;
@end
