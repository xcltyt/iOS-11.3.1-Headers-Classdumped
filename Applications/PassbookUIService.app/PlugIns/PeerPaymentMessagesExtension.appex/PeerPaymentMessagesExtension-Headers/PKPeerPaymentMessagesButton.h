//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIActivityIndicatorView, UIColor;

@interface PKPeerPaymentMessagesButton : UIButton
{
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIActivityIndicatorView *_spinner;
    _Bool _showsActivityIndicator;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool showsActivityIndicator; // @synthesize showsActivityIndicator=_showsActivityIndicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

