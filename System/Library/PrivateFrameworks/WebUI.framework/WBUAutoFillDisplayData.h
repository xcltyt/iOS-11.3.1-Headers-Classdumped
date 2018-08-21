/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WBUAutoFillDisplayData : NSObject {

	NSString* _label;
	NSArray* _fillMatches;

}

@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) NSString * property; 
@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)addressStringForLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fillMatches:(id)arg2 ;
-(NSArray *)fillMatches;
-(NSString *)valueString;
-(NSString *)property;
@end
