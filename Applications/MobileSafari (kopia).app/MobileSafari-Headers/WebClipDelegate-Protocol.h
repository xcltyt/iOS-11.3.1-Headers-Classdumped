//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIWebClip;

@protocol WebClipDelegate <NSObject>

@optional
- (void)webClip:(UIWebClip *)arg1 startupLandscapeImageRequestDidFinishWithImage:(UIImage *)arg2;
- (void)webClip:(UIWebClip *)arg1 startupImageRequestDidFinishWithImage:(UIImage *)arg2;
- (void)webClip:(UIWebClip *)arg1 iconRequestDidFinishWithImage:(UIImage *)arg2 precomposed:(_Bool)arg3;
@end
