/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAGKSpeakableAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * templateName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speakableAnswer;
+(id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
@end
