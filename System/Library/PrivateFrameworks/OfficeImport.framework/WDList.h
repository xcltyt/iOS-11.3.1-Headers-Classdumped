/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableArray;

@interface WDList : NSObject {

	WDDocument* mDocument;
	int mListId;
	int mListDefinitionId;
	NSMutableArray* mLevelOverrides;

}

@property (nonatomic,readonly) int listId; 
@property (nonatomic,readonly) int listDefinitionId; 
-(void)dealloc;
-(id)description;
-(int)listDefinitionId;
-(id)levelOverrideForLevel:(unsigned char)arg1 ;
-(unsigned long long)levelOverrideCount;
-(id)levelOverrideAt:(unsigned long long)arg1 ;
-(void)removeLevelOverride:(id)arg1 ;
-(id)levelOverrides;
-(BOOL)isAnyListLevelOverridden;
-(id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3 ;
-(int)listId;
-(id)addLevelOverrideWithLevel:(unsigned char)arg1 ;
@end
