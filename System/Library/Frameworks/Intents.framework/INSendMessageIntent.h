/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendMessageIntentExport.h>

@class NSArray, NSString, INSpeakableString, INPerson;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,copy,readonly) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy,readonly) NSString * conversationIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) INPerson * sender; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(id)domain;
-(INPerson *)sender;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(void)setSender:(INPerson *)arg1 ;
-(NSString *)serviceName;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(INSpeakableString *)speakableGroupName;
-(void)setSpeakableGroupName:(INSpeakableString *)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end
