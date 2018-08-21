/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedGroupInsertionDescriptor.h>

@class NSSet;

@interface FCEditorialFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor> {

	NSSet* _groupTypesToExhaust;
	unsigned long long _minPrecedingTopicGroups;

}

@property (nonatomic,copy,readonly) NSSet * groupTypesToExhaust;                        //@synthesize groupTypesToExhaust=_groupTypesToExhaust - In the implementation block
@property (nonatomic,readonly) unsigned long long minPrecedingTopicGroups;              //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2 ;
-(id)initWithGroupTypesToExhaust:(id)arg1 minPrecedingTopicGroups:(unsigned long long)arg2 ;
-(NSSet *)groupTypesToExhaust;
-(unsigned long long)minPrecedingTopicGroups;
@end
