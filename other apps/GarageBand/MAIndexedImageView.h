//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSMutableDictionary;

@interface MAIndexedImageView : UIImageView
{
    NSMutableDictionary *_imageStorage;
}

- (void).cxx_destruct;
- (void)showImageForKey:(id)arg1;
- (id)allImagesAndKeys;
- (void)removeImageForKey:(id)arg1;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (void)awakeFromNib;

@end
