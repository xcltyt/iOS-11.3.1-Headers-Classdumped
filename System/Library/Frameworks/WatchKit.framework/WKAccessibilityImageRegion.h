/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString;

@interface WKAccessibilityImageRegion : NSObject {

	NSString* _label;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
