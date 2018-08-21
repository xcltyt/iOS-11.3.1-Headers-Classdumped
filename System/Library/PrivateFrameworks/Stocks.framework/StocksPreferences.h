/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface StocksPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;
	NSUserDefaults* _sharedDefaults;
	BOOL _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) BOOL changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned long long textDirection;                                 //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) BOOL textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)synchronize;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)resetLocale;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)textAttachmentDirectionIsRightToLeft;
-(id)localSharedDefaults;
-(BOOL)isChangeColorSwapped;
-(unsigned long long)textDirection;
@end
