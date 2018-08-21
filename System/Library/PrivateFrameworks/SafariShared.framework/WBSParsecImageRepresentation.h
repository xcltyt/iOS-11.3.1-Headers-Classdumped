/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@protocol OS_dispatch_group;
@class NSString, UIImage, NSObject, NSNumber;

@interface WBSParsecImageRepresentation : WBSParsecModel {

	NSString* _dataString;
	NSString* _identifier;
	NSString* _imageURLString;
	UIImage* _image;
	BOOL _template;
	NSObject*<OS_dispatch_group> _downloadGroup;
	NSNumber* _baselineOffset;
	NSNumber* _roundCornerRadius;

}

@property (nonatomic,readonly) NSNumber * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,readonly) NSNumber * roundCornerRadius;              //@synthesize roundCornerRadius=_roundCornerRadius - In the implementation block
+(id)_bagImageDataCache;
+(id)schema;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)baselineOffset;
-(id)initWithJSONObject:(id)arg1 ;
-(id)imageWithSession:(id)arg1 ;
-(void)_fetchImageData;
-(id)imageWithScaleFactor:(double)arg1 ;
-(id)_templateImageWithImage:(id)arg1 ;
-(void)_fetchImageDataUsingBlock:(/*^block*/id)arg1 ;
-(id)test_data;
-(id)test_identifier;
-(id)test_imageURLString;
-(BOOL)test_isTemplate;
-(NSNumber *)roundCornerRadius;
-(id)_imageWithData:(id)arg1 ;
@end
