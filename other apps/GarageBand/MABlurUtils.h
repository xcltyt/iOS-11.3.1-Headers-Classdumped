//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MABlurUtils : NSObject
{
}

+ (struct CGImage *)createBlurredCGImage:(struct CGImage *)arg1 scaleFactor:(double)arg2 baseFrame:(struct CGRect)arg3 stretchFrame:(struct CGRect)arg4 blurRadius:(double)arg5 tintColor:(struct CGColor *)arg6 blurIntensity:(double)arg7 blurOpacity:(double)arg8 addGrainToBlur:(_Bool)arg9 grainSize:(double)arg10 grainAlpha:(double)arg11;
+ (id)blurredCIImage:(struct CGImage *)arg1 scaleFactor:(double)arg2 baseFrame:(struct CGRect)arg3 stretchFrame:(struct CGRect)arg4 blurRadius:(double)arg5 tintColor:(struct CGColor *)arg6 blurIntensity:(double)arg7 blurOpacity:(double)arg8 addGrainToBlur:(_Bool)arg9 grainSize:(double)arg10 grainAlpha:(double)arg11;
+ (id)maBlurImage:(struct CGImage *)arg1 inBounds:(struct CGRect)arg2 withPixelScale:(double)arg3 scaledToFrame:(struct CGRect)arg4 blurRadius:(double)arg5 blurResolution:(double)arg6 blurTintColor:(struct CGColor *)arg7 blurIntensity:(double)arg8 blurOpacity:(double)arg9 addGrainToBlur:(_Bool)arg10 grainSize:(double)arg11 grainAlpha:(double)arg12;

@end
