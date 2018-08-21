/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface PSIGroupResultGroupSnapshot : NSObject {

	short _category;
	NSString* _contentString;
	NSMutableArray* _matchRange;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;

}

@property (nonatomic,copy,readonly) NSString * contentString;                   //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * matchRange;              //@synthesize matchRange=_matchRange - In the implementation block
@property (nonatomic,readonly) short category;                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long groupId;                      //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;                //@synthesize owningGroupId=_owningGroupId - In the implementation block
-(void)dealloc;
-(short)category;
-(id)initWithContentString:(id)arg1 category:(short)arg2 groupId:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 ;
-(unsigned long long)owningGroupId;
-(NSMutableArray *)matchRange;
-(NSString *)contentString;
-(unsigned long long)groupId;
@end
