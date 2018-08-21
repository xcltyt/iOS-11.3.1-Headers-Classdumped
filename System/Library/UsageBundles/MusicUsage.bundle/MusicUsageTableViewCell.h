/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicUsage/MusicUsage-Structs.h>
#import <Preferences/PSUsageBundleCell.h>

@class UIImageView, UILabel, MPUAbbreviatingLabel, MusicUsageItem, MPArtworkCatalog, NSArray, NSString;

@interface MusicUsageTableViewCell : PSUsageBundleCell {

	BOOL _artworkConfigurationBlockEnabled;
	UIImageView* _artworkView;
	UILabel* _fileSizeLabel;
	double _lastUsedArtworkViewAspectRatio;
	MPUAbbreviatingLabel* _subtitleLabel;
	UILabel* _titleLabel;
	MusicUsageItem* _usageItem;
	MPArtworkCatalog* _usageItemArtworkCatalog;
	BOOL _usageItemHasArtworkCatalogBlock;
	BOOL _usageItemArtworkWantsCircleTreatment;
	NSArray* _usageItemSubtitles;
	NSString* _usageItemTitle;

}
+(double)maximumRowHeightIncludingArtwork:(BOOL)arg1 includingSubtitle:(BOOL)arg2 traitCollection:(id)arg3 sizingCache:(SCD_Struct_Mu0*)arg4 ;
-(void)_reloadWithUsageItemFromSpecifier:(id)arg1 ;
-(void)_layoutArtworkViewWithAvailableContentBounds:(CGRect)arg1 idealArtworkSize:(CGSize)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_fileSizeText;
-(void)layoutSubviews;
-(void)dealloc;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_handleArtworkImageUpdate:(id)arg1 idealArtworkSize:(CGSize)arg2 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
@end
