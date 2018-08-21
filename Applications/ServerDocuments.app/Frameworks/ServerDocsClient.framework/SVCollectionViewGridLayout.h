/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:38 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/ServerDocsClient-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface SVCollectionViewGridLayout : UICollectionViewFlowLayout {

	BOOL _showsDetailLabel;
	BOOL _showsHeader;

}

@property (assign,nonatomic) BOOL showsDetailLabel;              //@synthesize showsDetailLabel=_showsDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL showsHeader;                   //@synthesize showsHeader=_showsHeader - In the implementation block
+(CGSize)thumbnailSizeForTraits:(id)arg1 ;
+(id)nameLabelFont;
+(id)detailLabelFont;
+(double)nameLabelHeight;
+(double)detailLabelHeight;
+(BOOL)regularLayoutForTraits:(id)arg1 ;
+(CGSize)defaultSizeForTraits:(id)arg1 showsDetailLabel:(BOOL)arg2 ;
-(void)setShowsDetailLabel:(BOOL)arg1 ;
-(void)setShowsHeader:(BOOL)arg1 ;
-(BOOL)showsHeader;
-(BOOL)showsDetailLabel;
-(id)init;
-(void)prepareLayout;
@end
