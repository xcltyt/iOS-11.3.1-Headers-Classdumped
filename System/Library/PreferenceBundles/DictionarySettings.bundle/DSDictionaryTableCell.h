/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/DictionarySettings.bundle/DictionarySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class DUDefinitionDictionary, DSDownloadProgressButton;

@interface DSDictionaryTableCell : PSTableCell {

	DUDefinitionDictionary* _definitionDictionary;
	DSDownloadProgressButton* _downloadButton;

}

@property (nonatomic,retain) DUDefinitionDictionary * definitionDictionary;              //@synthesize definitionDictionary=_definitionDictionary - In the implementation block
@property (nonatomic,retain) DSDownloadProgressButton * downloadButton;                  //@synthesize downloadButton=_downloadButton - In the implementation block
+(long long)cellStyle;
-(void)reloadDataWithAssetOperationState:(id)arg1 ;
-(void)setDefinitionDictionary:(DUDefinitionDictionary *)arg1 ;
-(void)handleDownloadButtonPressed:(id)arg1 ;
-(DUDefinitionDictionary *)definitionDictionary;
-(void)layoutSubviews;
-(void)reloadData;
-(id)title;
-(id)subtitle;
-(void)updateLabels;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(DSDownloadProgressButton *)downloadButton;
-(void)setDownloadButton:(DSDownloadProgressButton *)arg1 ;
@end
