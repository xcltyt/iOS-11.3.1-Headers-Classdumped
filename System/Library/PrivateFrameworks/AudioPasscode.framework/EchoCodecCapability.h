/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioPasscode/AUPasscodeCodecCapability.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding> {

	NSArray* _algorithmVersionNumbers;
	NSRange _frameSizeRange;
	NSRange _numFrameRepeatRange;

}

@property (nonatomic,readonly) NSRange frameSizeRange;                         //@synthesize frameSizeRange=_frameSizeRange - In the implementation block
@property (nonatomic,readonly) NSRange numFrameRepeatRange;                    //@synthesize numFrameRepeatRange=_numFrameRepeatRange - In the implementation block
@property (nonatomic,readonly) NSArray * algorithmVersionNumbers;              //@synthesize algorithmVersionNumbers=_algorithmVersionNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)frameSizeRange;
-(NSRange)numFrameRepeatRange;
-(NSArray *)algorithmVersionNumbers;
@end
