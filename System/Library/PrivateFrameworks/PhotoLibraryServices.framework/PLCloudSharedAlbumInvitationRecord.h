/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLCloudSharedAlbum, NSArray;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (nonatomic,retain) NSString * albumGUID; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSNumber * invitationStateLocal; 
@property (assign,nonatomic) NSNumber * inviteeEmailKey; 
@property (assign,nonatomic) NSString * inviteeHashedPersonID; 
@property (nonatomic,retain) NSString * inviteeFirstName; 
@property (nonatomic,retain) NSString * inviteeLastName; 
@property (nonatomic,retain) NSString * inviteeFullName; 
@property (assign,nonatomic) BOOL isMine; 
@property (nonatomic,retain) NSDate * inviteeSubscriptionDate; 
@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (nonatomic,readonly) NSArray * inviteeEmails; 
@property (nonatomic,readonly) NSArray * inviteePhones; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)entityName;
+(id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7 ;
+(id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)delete;
-(id)init;
-(void)dealloc;
-(void)awakeFromInsert;
-(void)willSave;
-(void)prepareForDeletion;
-(void)setInviteeEmails:(id)arg1 phones:(id)arg2 ;
-(id)invitationStateDescription;
-(NSArray *)inviteeEmails;
-(NSArray *)inviteePhones;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg1 ;
@end
