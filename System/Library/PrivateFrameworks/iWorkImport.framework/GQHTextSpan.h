/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHTextSpan : NSObject
+(int)handlePageStart:(id)arg1 state:(id)arg2 ;
+(int)handleContainerHint:(id)arg1 state:(id)arg2 ;
+(int)nonWhitespaceCount:(CFArrayRef)arg1 ;
+(int)handleSpan:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3 ;
+(int)handleTextListChild:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextList:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextMarker:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleAutoNumber:(id)arg1 state:(id)arg2 ;
+(int)handleAttachment:(id)arg1 state:(id)arg2 ;
@end
