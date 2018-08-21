/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface AUViewController : UIViewController <NSExtensionRequestHandling> {

	NSExtensionContext* _context;

}

@property (assign) NSExtensionContext * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)context;
-(void)setContext:(NSExtensionContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end
