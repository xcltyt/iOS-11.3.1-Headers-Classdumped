/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ACCMediaLibraryUpdatePlaylistContent : NSObject {

	int _contentStyle;
	NSString* _mediaLibraryUID;
	NSString* _revision;
	unsigned long long _persistentID;
	NSMutableArray* _contentList;

}

@property (nonatomic,retain) NSMutableArray * contentList;                 //@synthesize contentList=_contentList - In the implementation block
@property (nonatomic,retain) NSString * mediaLibraryUID;                   //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * revision;                          //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) int contentStyle;                             //@synthesize contentStyle=_contentStyle - In the implementation block
-(id)description;
-(id)debugDescription;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(void)setRevision:(NSString *)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(NSMutableArray *)contentList;
-(NSString *)revision;
-(unsigned long long)persistentID;
-(id)copyDict;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(void)setContentStyle:(int)arg1 ;
-(NSString *)mediaLibraryUID;
-(int)contentStyle;
-(unsigned long long)contentListCount;
-(id)copyContentDictList;
-(id)initWithMediaLibrary:(id)arg1 revision:(id)arg2 dict:(id)arg3 ;
-(id)copyContentList;
-(void)replaceContentList:(id)arg1 ;
-(void)addContentPersistentID:(unsigned long long)arg1 ;
-(void)replaceContentItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceContentPersistentID:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)getContentItemAtIndex:(unsigned long long)arg1 ;
-(void)iterateContentItems:(/*^block*/id)arg1 ;
-(void)iterateContentPersistentIDs:(/*^block*/id)arg1 ;
-(void)setContentList:(NSMutableArray *)arg1 ;
@end
