/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WebBookmark, NSArray;

@interface WBDuplicateBookmarkGroup : NSObject {

	NSMutableArray* _dupicateBookmarks;
	NSMutableArray* _dupicateBookmarksToKeep;
	BOOL _foundDuplicates;
	WebBookmark* _originalBookmark;

}

@property (nonatomic,readonly) WebBookmark * originalBookmark;              //@synthesize originalBookmark=_originalBookmark - In the implementation block
@property (nonatomic,readonly) NSArray * duplicates; 
@property (nonatomic,readonly) NSArray * duplicatesToKeep; 
@property (nonatomic,readonly) BOOL foundDuplicates;                        //@synthesize foundDuplicates=_foundDuplicates - In the implementation block
-(id)initWithOriginalBookmark:(id)arg1 ;
-(NSArray *)duplicates;
-(NSArray *)duplicatesToKeep;
-(void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2 ;
-(void)addDuplicateBookmarkToKeep:(id)arg1 ;
-(void)exchangeOriginalBookmarkWithBookmark:(id)arg1 ;
-(void)removeAllDuplicates;
-(WebBookmark *)originalBookmark;
-(BOOL)foundDuplicates;
@end
