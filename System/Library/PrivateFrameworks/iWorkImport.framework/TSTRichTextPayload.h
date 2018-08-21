/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* mStorage;

}

@property (nonatomic,retain) TSWPStorage * storage; 
+(id)payloadWithStorage:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)dealloc;
-(id)string;
-(TSWPStorage *)storage;
-(id)copyWithContext:(id)arg1 ;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(BOOL)requiresRichText;
@end
