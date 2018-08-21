/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)content;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIDecoratedText *)recipient;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
@end
