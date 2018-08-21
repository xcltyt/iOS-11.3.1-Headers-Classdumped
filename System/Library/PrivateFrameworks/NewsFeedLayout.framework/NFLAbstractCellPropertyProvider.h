/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFLFontCache, NSSet, NSString;

@interface NFLAbstractCellPropertyProvider : NSObject {

	id* _propertiesByColumnSpan;
	unsigned long long propertiesByColumnSpanSize;
	double _scaleValue;
	NFLFontCache* _fontCache;
	NSSet* _supportedColumnSpans;
	Class _propertyClass;
	NSString* _plistName;

}

@property (assign,nonatomic) Class propertyClass;                         //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,retain) NSString * plistName;                        //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,readonly) double scaleValue;                         //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) NFLFontCache * fontCache;                  //@synthesize fontCache=_fontCache - In the implementation block
@property (nonatomic,readonly) NSSet * supportedColumnSpans;              //@synthesize supportedColumnSpans=_supportedColumnSpans - In the implementation block
+(id)publisherTitleFontLarge;
+(id)publisherTitleFontSmall;
-(id)init;
-(void)dealloc;
-(NSString *)plistName;
-(void)setPlistName:(NSString *)arg1 ;
-(Class)propertyClass;
-(id)propertiesIrrespectiveToColumnSpan;
-(double)scaleValue;
-(id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5 ;
-(id)propertiesForColumnSpan:(long long)arg1 ;
-(NSSet *)supportedColumnSpans;
-(void)setPropertyClass:(Class)arg1 ;
-(NFLFontCache *)fontCache;
@end
