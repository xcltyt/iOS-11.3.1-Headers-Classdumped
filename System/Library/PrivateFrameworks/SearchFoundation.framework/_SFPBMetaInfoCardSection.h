/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMetaInfoCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBImage, NSData;


@protocol _SFPBMetaInfoCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (assign,nonatomic) BOOL trending; 
@property (nonatomic,readonly) BOOL hasTrending; 
@property (nonatomic,retain) _SFPBURL * contentURL; 
@property (nonatomic,readonly) BOOL hasContentURL; 
@property (nonatomic,retain) _SFPBURL * hostPageURL; 
@property (nonatomic,readonly) BOOL hasHostPageURL; 
@property (nonatomic,retain) _SFPBImage * badge; 
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasType;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(id)initWithDictionary:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setBadge:(id)arg1;
-(_SFPBImage *)badge;
-(BOOL)hasBadge;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setTrending:(BOOL)arg1;
-(void)setHostPageURL:(id)arg1;
-(BOOL)hasTrending;
-(_SFPBURL *)hostPageURL;
-(BOOL)trending;
-(BOOL)hasHostPageURL;
-(_SFPBURL *)contentURL;
-(void)setContentURL:(id)arg1;
-(BOOL)hasBackgroundColor;
-(BOOL)hasContentURL;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBImage, NSData;

@interface _SFPBMetaInfoCardSection : PBCodable <_SFPBMetaInfoCardSection, NSSecureCoding> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _trending;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBURL* _contentURL;
	_SFPBURL* _hostPageURL;
	_SFPBImage* _badge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                          //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                     //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText;               //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden;                                 //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding;                               //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding;                            //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle;                               //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (assign,nonatomic) BOOL trending;                                    //@synthesize trending=_trending - In the implementation block
@property (nonatomic,readonly) BOOL hasTrending; 
@property (nonatomic,retain) _SFPBURL * contentURL;                            //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) BOOL hasContentURL; 
@property (nonatomic,retain) _SFPBURL * hostPageURL;                           //@synthesize hostPageURL=_hostPageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasHostPageURL; 
@property (nonatomic,retain) _SFPBImage * badge;                               //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(id)dictionaryRepresentation;
-(void)setBadge:(_SFPBImage *)arg1 ;
-(_SFPBImage *)badge;
-(BOOL)hasBadge;
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
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setTrending:(BOOL)arg1 ;
-(void)setHostPageURL:(_SFPBURL *)arg1 ;
-(BOOL)hasTrending;
-(_SFPBURL *)hostPageURL;
-(BOOL)trending;
-(BOOL)hasHostPageURL;
-(_SFPBURL *)contentURL;
-(void)setContentURL:(_SFPBURL *)arg1 ;
-(BOOL)hasBackgroundColor;
-(BOOL)hasContentURL;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
@end
