/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField {

	NSString* _rubyText;

}

@property (nonatomic,copy) NSString * rubyText;                  //@synthesize rubyText=_rubyText - In the implementation block
@property (nonatomic,readonly) NSString * baseText; 
@property (nonatomic,readonly) int baseTextScript; 
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(RubyFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RubyFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(int)smartFieldKind;
-(BOOL)supportsDeepCopyForUndo;
-(id)text;
-(BOOL)allowsEditing;
-(id)copyWithContext:(id)arg1 ;
-(int)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(NSString *)rubyText;
-(int)baseTextScript;
-(BOOL)canCopy:(NSRange)arg1 ;
-(void)setRubyText:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 rubyText:(id)arg2 ;
-(NSString *)baseText;
@end
