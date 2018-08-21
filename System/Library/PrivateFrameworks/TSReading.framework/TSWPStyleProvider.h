/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
@optional
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
-(id)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
-(id)listStyleAtParIndex:(unsigned long long)arg1;
-(id)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
-(unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TS129*)arg2;
-(id)modifiedCharacterStyle:(id)arg1 atCharIndex:(unsigned long long)arg2;
-(BOOL)supportsBoldItalicUnderlineShortcuts;

@required
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;

@end
