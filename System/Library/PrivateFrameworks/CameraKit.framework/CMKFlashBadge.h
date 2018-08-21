/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeView.h>

@class UIImage;

@interface CMKFlashBadge : CMKBadgeView {

	UIImage* __contentImage;

}

@property (nonatomic,retain) UIImage * _contentImage;              //@synthesize _contentImage=__contentImage - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_commonInit;
-(id)_maskImage;
-(CGSize)_imageSize;
-(UIEdgeInsets)_imageInsets;
-(UIImage *)_contentImage;
-(void)set_contentImage:(UIImage *)arg1 ;
@end
