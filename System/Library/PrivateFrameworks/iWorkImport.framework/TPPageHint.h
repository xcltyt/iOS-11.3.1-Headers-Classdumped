/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@protocol TSWPTopicNumberHints;
@class NSArray, TSUNoCopyDictionary, NSSet, NSObject, NSDictionary, NSString;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {

	long long _pageKind;
	unsigned long long _pageRow;
	unsigned long long _pageColumn;
	NSArray* _hints;
	TSUNoCopyDictionary* _flowHints;
	NSRange _footnoteAutoNumberRange;
	NSRange _footnoteLayoutRange;
	NSArray* _childHints;
	TSUNoCopyDictionary* _anchoredDrawablePositions;
	NSSet* _startingPartitionedAttachments;
	NSObject*<TSWPTopicNumberHints> _topicNumbers;
	NSDictionary* _flowTopicNumbers;

}

@property (assign,nonatomic) long long pageKind;                                                //@synthesize pageKind=_pageKind - In the implementation block
@property (assign,nonatomic) unsigned long long pageColumn;                                     //@synthesize pageColumn=_pageColumn - In the implementation block
@property (assign,nonatomic) unsigned long long pageRow;                                        //@synthesize pageRow=_pageRow - In the implementation block
@property (assign,nonatomic) NSRange footnoteAutoNumberRange;                                   //@synthesize footnoteAutoNumberRange=_footnoteAutoNumberRange - In the implementation block
@property (assign,nonatomic) NSRange footnoteLayoutRange;                                       //@synthesize footnoteLayoutRange=_footnoteLayoutRange - In the implementation block
@property (nonatomic,retain) TSUNoCopyDictionary * anchoredDrawablePositions;                   //@synthesize anchoredDrawablePositions=_anchoredDrawablePositions - In the implementation block
@property (nonatomic,retain) NSSet * startingPartitionedAttachments;                            //@synthesize startingPartitionedAttachments=_startingPartitionedAttachments - In the implementation block
@property (nonatomic,readonly) id<TSDHint> firstChildHint; 
@property (nonatomic,readonly) id<TSDHint> lastChildHint; 
@property (nonatomic,retain) NSArray * childHints;                                              //@synthesize childHints=_childHints - In the implementation block
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> topicNumbers; 
@property (nonatomic,readonly) unsigned long long lineCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
@property (nonatomic,readonly) BOOL lastLineIsEmptyAndHasListLabel; 
-(id)initWithArchive:(const PageHintArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(PageHintArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(BOOL)lastLineIsEmptyAndHasListLabel;
-(id)firstHint;
-(id)lastHint;
-(long long)pageKind;
-(id)flowHints;
-(id)flowTopicNumbers;
-(void)setFootnoteAutoNumberRange:(NSRange)arg1 ;
-(void)setFootnoteLayoutRange:(NSRange)arg1 ;
-(void)setChildHints:(NSArray *)arg1 ;
-(void)setAnchoredDrawablePositions:(TSUNoCopyDictionary *)arg1 ;
-(void)setStartingPartitionedAttachments:(NSSet *)arg1 ;
-(NSRange)footnoteAutoNumberRange;
-(NSRange)footnoteLayoutRange;
-(NSObject*<TSWPTopicNumberHints>)topicNumbers;
-(NSRange)p_range;
-(BOOL)p_unarchiveHint:(id)arg1 fromArchive:(const TargetHintArchive*)arg2 ;
-(void)p_unarchiveTopicNumbers:(id)arg1 fromArchive:(const TopicNumberHintsArchive*)arg2 unarchiver:(id)arg3 ;
-(void)p_archiveHint:(id)arg1 intoArchive:(TargetHintArchive*)arg2 ;
-(TSUNoCopyDictionary *)anchoredDrawablePositions;
-(void)p_archiveTopicNumbers:(id)arg1 intoArchive:(TopicNumberHintsArchive*)arg2 archiver:(id)arg3 ;
-(void)setHints:(id)arg1 topicNumbers:(id)arg2 ;
-(void)setFlowHints:(id)arg1 flowTopicNumbers:(id)arg2 ;
-(void)offsetStartCharIndexBy:(long long)arg1 charIndex:(unsigned long long)arg2 ;
-(BOOL)syncsWithEndOfPageHint:(id)arg1 storage:(id)arg2 ;
-(NSRange)rangeAndChildHints:(out id*)arg1 ;
-(void)setPageKind:(long long)arg1 ;
-(unsigned long long)pageColumn;
-(void)setPageColumn:(unsigned long long)arg1 ;
-(unsigned long long)pageRow;
-(void)setPageRow:(unsigned long long)arg1 ;
-(NSArray *)childHints;
-(NSSet *)startingPartitionedAttachments;
-(NSRange)range;
-(id)hints;
-(id<TSDHint>)firstChildHint;
-(id<TSDHint>)lastChildHint;
-(id)copyForArchiving;
-(unsigned long long)lineCount;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(id)lastColumn;
-(id)firstColumn;
@end
