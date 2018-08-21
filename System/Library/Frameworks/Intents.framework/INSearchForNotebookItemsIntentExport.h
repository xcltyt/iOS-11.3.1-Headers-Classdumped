/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;


@protocol INSearchForNotebookItemsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) long long itemType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) CLPlacemark * location; 
@property (assign,nonatomic) long long locationSearchType; 
@property (nonatomic,copy) INDateComponentsRange * dateTime; 
@property (assign,nonatomic) long long dateSearchType; 
@property (nonatomic,copy) NSString * notebookItemIdentifier; 
@required
-(long long)itemType;
-(void)setContent:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(NSString *)content;
-(INSpeakableString *)title;
-(void)setStatus:(long long)arg1;
-(long long)status;
-(CLPlacemark *)location;
-(void)setLocation:(id)arg1;
-(void)setDateTime:(id)arg1;
-(INDateComponentsRange *)dateTime;
-(void)setLocationSearchType:(long long)arg1;
-(void)setDateSearchType:(long long)arg1;
-(void)setNotebookItemIdentifier:(id)arg1;
-(long long)locationSearchType;
-(long long)dateSearchType;
-(NSString *)notebookItemIdentifier;
-(void)setItemType:(long long)arg1;

@end
