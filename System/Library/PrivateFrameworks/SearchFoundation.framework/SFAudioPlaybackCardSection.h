/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFAudioPlaybackCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFText, SFRichText, NSDictionary, NSData;


@protocol SFAudioPlaybackCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * topImage; 
@property (nonatomic,retain) SFText * topText; 
@property (nonatomic,copy) NSString * topSecondaryText; 
@property (nonatomic,retain) SFImage * bottomImage; 
@property (nonatomic,retain) SFText * bottomText; 
@property (nonatomic,retain) SFText * bottomSubtitle; 
@property (nonatomic,copy) NSString * topImageEmoji; 
@property (nonatomic,copy) NSString * bottomImageEmoji; 
@property (assign,nonatomic) int state; 
@property (nonatomic,copy) NSArray * playCommands; 
@property (nonatomic,copy) NSArray * stopCommands; 
@property (nonatomic,retain) SFRichText * detailText; 
@property (nonatomic,retain) SFRichText * title; 
@property (nonatomic,retain) SFRichText * subtitle; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setTitle:(id)arg1;
-(int)state;
-(void)setState:(int)arg1;
-(SFRichText *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setSubtitle:(id)arg1;
-(SFRichText *)subtitle;
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(SFRichText *)detailText;
-(void)setDetailText:(id)arg1;
-(NSArray *)playCommands;
-(void)setPlayCommands:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setTopSecondaryText:(id)arg1;
-(void)setBottomSubtitle:(id)arg1;
-(void)setTopImageEmoji:(id)arg1;
-(void)setBottomImageEmoji:(id)arg1;
-(NSString *)topSecondaryText;
-(SFText *)bottomSubtitle;
-(NSString *)topImageEmoji;
-(NSString *)bottomImageEmoji;
-(NSArray *)stopCommands;
-(void)setStopCommands:(id)arg1;
-(SFText *)topText;
-(SFText *)bottomText;
-(NSArray *)punchoutOptions;
-(void)setTopText:(id)arg1;
-(void)setBottomText:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSData *)jsonData;
-(void)setTopImage:(id)arg1;
-(void)setBottomImage:(id)arg1;
-(SFImage *)topImage;
-(SFImage *)bottomImage;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFText, SFRichText, NSDictionary, NSData, SFCard;

@interface SFAudioPlaybackCardSection : SFCardSection <SFAudioPlaybackCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	int _state;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _topImage;
	SFText* _topText;
	NSString* _topSecondaryText;
	SFImage* _bottomImage;
	SFText* _bottomText;
	SFText* _bottomSubtitle;
	NSString* _topImageEmoji;
	NSString* _bottomImageEmoji;
	NSArray* _playCommands;
	NSArray* _stopCommands;
	SFRichText* _detailText;
	SFRichText* _title;
	SFRichText* _subtitle;
	SFImage* _thumbnail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * topImage;                                     //@synthesize topImage=_topImage - In the implementation block
@property (nonatomic,retain) SFText * topText;                                       //@synthesize topText=_topText - In the implementation block
@property (nonatomic,copy) NSString * topSecondaryText;                              //@synthesize topSecondaryText=_topSecondaryText - In the implementation block
@property (nonatomic,retain) SFImage * bottomImage;                                  //@synthesize bottomImage=_bottomImage - In the implementation block
@property (nonatomic,retain) SFText * bottomText;                                    //@synthesize bottomText=_bottomText - In the implementation block
@property (nonatomic,retain) SFText * bottomSubtitle;                                //@synthesize bottomSubtitle=_bottomSubtitle - In the implementation block
@property (nonatomic,copy) NSString * topImageEmoji;                                 //@synthesize topImageEmoji=_topImageEmoji - In the implementation block
@property (nonatomic,copy) NSString * bottomImageEmoji;                              //@synthesize bottomImageEmoji=_bottomImageEmoji - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSArray * playCommands;                                   //@synthesize playCommands=_playCommands - In the implementation block
@property (nonatomic,copy) NSArray * stopCommands;                                   //@synthesize stopCommands=_stopCommands - In the implementation block
@property (nonatomic,retain) SFRichText * detailText;                                //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFRichText * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasState;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(SFRichText *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(SFRichText *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setSubtitle:(SFRichText *)arg1 ;
-(SFRichText *)subtitle;
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)thumbnail;
-(void)setThumbnail:(SFImage *)arg1 ;
-(SFRichText *)detailText;
-(void)setDetailText:(SFRichText *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setTopSecondaryText:(NSString *)arg1 ;
-(void)setBottomSubtitle:(SFText *)arg1 ;
-(void)setTopImageEmoji:(NSString *)arg1 ;
-(void)setBottomImageEmoji:(NSString *)arg1 ;
-(NSString *)topSecondaryText;
-(SFText *)bottomSubtitle;
-(NSString *)topImageEmoji;
-(NSString *)bottomImageEmoji;
-(NSArray *)stopCommands;
-(void)setStopCommands:(NSArray *)arg1 ;
-(SFText *)topText;
-(SFText *)bottomText;
-(NSArray *)punchoutOptions;
-(void)setTopText:(SFText *)arg1 ;
-(void)setBottomText:(SFText *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSData *)jsonData;
-(void)setTopImage:(SFImage *)arg1 ;
-(void)setBottomImage:(SFImage *)arg1 ;
-(SFImage *)topImage;
-(SFImage *)bottomImage;
@end
