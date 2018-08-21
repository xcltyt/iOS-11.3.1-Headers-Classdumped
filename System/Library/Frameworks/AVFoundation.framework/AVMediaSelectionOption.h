/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionOptionInternal, AVAssetTrack, NSString, NSArray, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * unicodeLanguageIdentifier; 
@property (nonatomic,readonly) NSString * unicodeLanguageCode; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)_plistHasOptionIdentifier:(id)arg1 ;
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4 ;
-(id)propertyList;
-(NSString *)unicodeLanguageIdentifier;
-(NSString *)unicodeLanguageCode;
-(AVAssetTrack *)track;
-(id)_track;
-(id)_groupMediaType;
-(id)_groupID;
-(id)_ancillaryDescription;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(BOOL)displaysNonForcedSubtitles;
-(id)_groupMediaCharacteristics;
-(id)optionID;
-(id)fallbackIDs;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(id)_taggedMediaCharacteristics;
-(id)associatedExtendedLanguageTag;
-(id)associatedPersistentIDs;
-(BOOL)_isMainProgramContent;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 ;
-(id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2 ;
-(id)associatedUnicodeLanguageIdentifier;
-(id)displayNameWithLocale:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)dictionary;
-(id)_title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(id)group;
-(NSString *)displayName;
-(id)languageCode;
-(NSArray *)commonMetadata;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaCharacteristics;
-(NSString *)extendedLanguageTag;
-(NSArray *)mediaSubTypes;
-(NSString *)mediaType;
-(BOOL)isPlayable;
-(id)metadataForFormat:(id)arg1 ;
-(int)trackID;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(NSArray *)availableMetadataFormats;
@end
